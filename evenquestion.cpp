#include <iostream>
using namespace std;

int sort(int totalf[],int length)
{
    int ans=1;
    ans=totalf[0]*ans;
    for(int j=1;j<length;j++)
    {
        ans=ans*(totalf[j]+1);
    }

    return ans;

}

int main()
{
    int i,t,count,div,number,l;
    int facs[100],totalf[100];
    cin>>t;
    while(t--)
    {
        count=0; div=2;
        i=0;
        cin>>number;
        while(number>1)
        {
            while(number%div==0)
            {
                count++;
                number=number/div;
                facs[i]=div; i++;
            }
             div++;

        }
       /* for(j=0;j<count;j++)
          cout<<facs[j]<<" ";
        */
        l=i=0;
        int couofpri=1;
        totalf[l]=facs[i];
        while(i<count-1)
        {
            if(facs[i+1]=facs[i])
            {
                couofpri++;
                //code put
            }
            else
            {
                totalf[l++]=couofpri;
                couofpri=1;
            }

        }
     int ans=sort(totalf,l);
     cout<<ans;

    }
    return 0;
}
