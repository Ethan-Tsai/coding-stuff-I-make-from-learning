#include "Conv.h"

void Conv::run() {
 // vvvvv put your code here vvvvv
 if (rst.read()) {
  clock_cycle = 0;
  temp_sum = 0;

  rom_addr.write(100);
  data_out.write(0);
  rom_rd.write(true);
  data_out_signal.write(false);

  for (int i = 0; i < 9; i++)
   kernel[i] = 0;

  for (int i = 0; i < 100; i++)
   data[i] = 0;
 }
 else {
  // 0 ~ 10 �g���w�s kernel �� bias
  if (clock_cycle >= 0 && clock_cycle <= 9) {
   if (clock_cycle <= 8)
    rom_addr.write(101 + clock_cycle);
   else
    rom_addr.write(0);

   if (clock_cycle <= 9)
    kernel[clock_cycle - 1] = data_in.read();
  }
  // 11 ~ 111 �g��Ū���Ϥ����
  else if (clock_cycle >= 10 && clock_cycle <= 110) {
   // 10~108 �g���ШDŪ���O����
   if (clock_cycle <= 108)
    rom_addr.write(clock_cycle - 9);
   else
    rom_rd.write(false);

   // 10 �g���w�s bais
   if (clock_cycle == 10)
    bias = data_in.read();
   else
    data[clock_cycle - 11] = data_in.read();
   
   // 33~110 �g���B��ÿ�X
   if (clock_cycle >= 33 && clock_cycle <= 110) {
    temp_sum = 0;

    // �u��8���x�}�B��
    if ((clock_cycle - 33) % 10 <= 7) {
     data_out_signal.write(true);

     // �x�}�B��
     for (int j = 0; j < 3; j++)
      for (int i = 0; i < 3; i++) 
       temp_sum += data[clock_cycle - 33 + i + 10 * j] * kernel[i + 3 * j];

     temp_sum += bias; /* �[�W������ */

     temp_sum >= 0 ? temp_sum : temp_sum = 0; /* ReLU��� */

     data_out.write(temp_sum); /* ��X */
    }
    else 
     data_out_signal.write(false);
   }
  }

  clock_cycle++;
 }
 // ^^^^^ put your code here ^^^^^
}

