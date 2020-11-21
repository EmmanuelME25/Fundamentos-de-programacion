#include<bits/stdc++.h>
using namespace std;

    int tab[11][11]; 
int main()
{
    int n=0, D=0,L=0,R=0,C=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>D>>L>>R>>C;

                        if(D==0)
                        {
                            if(L+C-1>10)
                            {
                                cout<<"N";
                                return 0;
                            }

                            for(int i=0;i<=L-1;i++)
                            {
                                tab[R-1][C+i-1]+=1;

                                if(tab[R-1][C+i-1]>=2)
                                {
                                    cout<<"N";
                                    return (0);
                                }

                            }

                        }



                        if(D==1)
                        {
                            if(L+R-1>10)
                            {
                                cout<<"N";
                                return 0;
                            }


                            for(int i=0;i<=L-1;i++)
                            {

                                tab[R+i-1][C-1]+=1;
                                if(tab[R+i-1][C-1]>=2)
                                {
                                    cout<<"N";
                                    return (0);
                                }

                            }
                        }




    }
  
    cout<<"Y";

    return 0;
}