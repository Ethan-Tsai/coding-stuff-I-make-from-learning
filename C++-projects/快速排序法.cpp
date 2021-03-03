#include<stdio.h>
#include<stdlib.h>
int main()
{	
	typedef struct _Range 
	{
	    int start, end;
	} 
	Range;
	
	Range new_Range(int s, int e) 
	{
	    Range r;
	    r.start = s;
	    r.end = e;
	    return r;
	}
	
	void swap(int *x, int *y) 
	{
	    int t = *x;
	    *x = *y;
	    *y = t;
	}
	
	void quick_sort(int arr[], const int len) 
	{
	    if (len <= 0)
	        return; // �קKlen����t�Ȯɤ޵o�q���~�]Segment Fault�^
	    // r[]�����C��,p���ƶq,r[p++]��push,r[--p]��pop�B���o����
	    Range r[len];
	    int p = 0;
	    r[p++] = new_Range(0, len - 1);
	    while (p) 
		{
	        Range range = r[--p];
	        if (range.start >= range.end)
	            continue;
	        int mid = arr[(range.start + range.end) / 2]; // ��������I������I
	        int left = range.start, right = range.end;
	        do 
			{
	            while (arr[left] < mid) ++left;   // �˴�����I�����O�_�ŦX�n�D
	            while (arr[right] > mid) --right; //�˴�����I�k���O�_�ŦX�n�D
	            if (left <= right)
				{
	                swap(&arr[left], &arr[right]);
	                left++;
	                right--;               // ���ʫ��w�H�~��
	            }
	        } while (left <= right);
	        if (range.start < right) r[p++] = new_Range(range.start, right);
	        if (range.end > left) r[p++] = new_Range(left, range.end);
	    }
	}
	system("Pause");
	return 0;
}
