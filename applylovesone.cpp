#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

void max_val(int *arr, int n_arr, int *Max, int &sec_max)
{
    int temp;
    int count = 0;
    int left = 0, right = n_arr - 1;
    while (arr[left] == 1 && left < n_arr)
         left++;
    if(left < n_arr)
    {
        for(int i = left; i <= 2*n_arr ; i++)
        {
            if(i < n_arr)
                temp = arr[i];
            else
                temp = arr[i - n_arr];
        
            if(temp == 1)
	            count++;
	        else
	        {
	           if(Max[0] < count)
	           {
	               sec_max = Max[0];
	               Max[0] = count;
	               Max[2] = i - 1;
	               Max[1] = i - Max[0] ;
	           }
	           else if(sec_max < count)
	              sec_max = count;
	           count = 0;
	           if(i > n_arr - 1)
	              break;
	        }
        }
    }
    else
        Max[0] = n_arr;
    //cout<<"max_l : "<<Max[1]<<" max_r : "<<Max[2]<<"Max0 : "<<Max[0]<<" sec_max : "<<sec_max<<"\n";
}

int disp_max(int *Max,int sec_max,int k,int start,int n_arr)
{
    if(sec_max >= k)
        return k;
    else if (Max[0] == n_arr)
        return min(Max[0],k);
    else if(Max[2] >= n_arr)
    {
        if (Max[1] < start )
        {
            int tmp2 = max(start - Max[1], Max[0] + Max[1] - start);
            int tmp = max(tmp2, sec_max);
            return min(tmp,k);
        }
        else if(start <= Max[2]-n_arr)
        {
            int tmp2= max(Max[2]- n_arr - start + 1, Max[0] - Max[2] + n_arr + start - 1);
            int tmp = max(tmp2,sec_max);
            return min(tmp,k);
        }
        else{
           return min(Max[0],k);
        }
    }
    else{
        if(Max[1] <= start && start <= Max[2])
        {
            int tmp2=max(start - Max[1],Max[0]+Max[1]- start);
            int tmp=max(tmp2,sec_max);
            return min(tmp,k);
        }
        else
        {
            return min(Max[0],k);
        }
    }
}

int main() {
    int n_arr, k_num,query;
	cin>>n_arr>>query>>k_num;
	
	int Max[3]={0,-1,-1};
	int sec_max = 0;
	int start = 0;
	
	char qu[query];
	int arr[n_arr];
	
	for(int i=0;i<n_arr;i++)
	    cin>>arr[i];
	    
	for(int jj = 0; jj < query ; jj++)
	    cin>>qu[jj];
	
	max_val(arr,n_arr,Max,sec_max);
	
	for(int j = 0; j < query ; j++)
	{
	    if(qu[j] == '?')
	        cout<<disp_max(Max,sec_max,k_num,start,n_arr)<<"\n";
	    else{
	        start--;
	        if(start == -1)
	           start = n_arr -1 ;
	    }
    }
	
	return 0;
}
