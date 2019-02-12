#include<iostream>
using namespace std;
int main()
{
	float x1,y1,x2,y2,xmax,xmin,ymax,ymin,x=0,y=0,m;

	int i,a1[i],b1[i];
	cin>>a1[0]>>a1[1]>>a1[2]>>a1[3];
	cin>>b1[0]>>b1[1]>>b1[2]>>b1[3];
	cin>>x1>>y1>>x2>>y2;
	cin>>xmax>>ymax>>xmin>>ymin;
	i=0;
	m=(y2-y1)/(x2-x1);
		while(i<4)
		{
			switch(a1[i])
			{
				case 0:
					break;
				case 1:
						if(i+1==1)
						{
							
							y=ymax;
							x=x1+(y-y1)/m;
						}
						else if(i+1==2)
						{
							
							y=ymin;
							x=x1+(y-y1)/m;
						}
						else if(i+1==3)
							{
							x=xmax;
							y=y1+m*(x-x1);
							}
						else if(i+1==4)
						{x=xmin;
							y=y1+m*(x-x1);		
					}
					break;
					default:
						break;
			}
			if(a1[i]==1)
			a1[i]=0;
			i++;
		}
		
	cout<<x<<"\t"<<y;	
	/*	
i=0;
		while(i<4)
		{
			switch(b1[i])
			{
				case 0:
					break;
				case 1:
					switch(i+1)
					{
						m=(y2-y1)/(x2-x1);
						case 1:
							y=ymax;
							x=x1+(y-y1)/m;
							break;
						case 2:
							y=ymin;
							x=x1+(y-y1)/m;
							break;
						case 3:
							x=xmax;
							y=y1+m*(x-x1);
							break;
						case 4:
							x=xmin;
							y=y1+m*(x-x1);
					}	
			}
			if(b1[i]==1)
			b1[i]=0;
			i++;
			
	}*/
	
		
return 0;
}
