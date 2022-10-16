#include<iostream>
using namespace std;
class alphabet
{ 
    public :
  
void A()
{
    cout<<endl<<endl;
    for(int i = 0;i<=12;i++)
    {   
        if(i<=1)
                {   cout<<"      ";
                    for(int n=0;n<=7;n++)
                    {
                        cout<<"*";
                    }
        

                }
        else if(i>=2&&i<=3)
        {   
            cout<<"    ";
            for(int a =0;a<=11;a++)
            {   
                if (a<=2||a>=9)
                cout<<"*";
                else 
                cout<<" ";
            }
        }                        
        else if(i>=4&&i<=5)
        {    
            cout<<"  ";
            for(int j=0;j<=15;j++)
            {
                
                if (j<=2||j>=13)
                cout<<"*";
                else 
                cout<<" ";
            }
        }

        else 
        {
            for(int j=0;j<=19;j++)
            {
                if(i==6)
                {
                    if(j==0||j==19)
                    {
                        cout<<" ";
                    }
                    else 
                    {
                        cout<<"*";
                    }
                }
                else 
                {
                if(i>8)
                {
                  if(j<=2||j>=17)
                  {
                    cout<<"*";
                  }
                  else 
                  {
                    cout<<" ";
                  }   
                }
                else
                {
                    cout<<"*";
                }
                }
            }
        }
        cout<<endl;
    }

}
void B()
{   cout<<endl<<endl;
    for(int i=0;i<=13;i++){

     if(i>=3&&i<=5)
    {
        for(int j=0;j<=19;j++)
        {
            if(j<=4||j>=15)
            {
                cout<<"*";
            }
            else 
            
            {{
                cout<<" ";
            }}
        }
    }
    else if(i>=8&&i<=10)
    {
        for(int j=0;j<=19;j++)
        {
            if(j<=4||j>=15)
            {
                cout<<"*";
            }
            else {
                cout<<" ";
            }
        }
    }
    else 
    {
      if(i==0||i==13)
      { 
        for(int j=0;j<=15;j++)
        {
            cout<<"*";
        }
      }
      else if(i==1||i==12||i==6||i==7)
      {
         for(int j=0;j<=17;j++)
        {
            cout<<"*";
        }

      }
       else
           {
            
            
            for(int j=0;j<=19;j++)
                {  
                    cout<<"*";   
                }
            
           }
    }
     cout<<endl;
    
    }

}
void C()
{
    cout<<endl<<endl;

    for(int i=0;i<=13;i++)
    {   
        
            if(i==0||i==13)
            {
                cout<<"    ";
                for(int j=0;j<=14;j++)
                {
                    cout<<"*";
                }
            }
            else if(i==1||i==12)
            {
                cout<<"  ";
                for(int j=0;j<=17;j++)
                {
                    cout<<"*";
                }
            }
            else if(i==2||i==11)
            {
                for(int j=0;j<=19;j++)
                {
                    cout<<"*";
                }
            }
            else if(i==3||i==10)
            {
                for(int j=0;j<=7;j++)
                {
                    cout<<"*";
                }
            }
            else if(i==4||i==9)
            {
                for(int j=0;j<=6;j++)
                {
                    cout<<"*";
                }
            }
            else {
                for(int j=0;j<=5;j++)
                {
                    cout<<"*";
                }
               
            }
        cout<<endl;
    }
}
void I()
{ 
    cout<<endl<<endl;
	
	for(int i = 0;i<=10;i++)
	{
        if(i<=0)
        {   
            
            for(int j = 0;j<=1;j++)
            {       cout<<"\t ";
                for(int n =0;n<=2;n++)
                {
                    cout<<"*";
                }
                    cout<<"\n";
            }
                    cout<<endl;
            
        }
     else
	    {
            cout<<"\t";
            for(int j = 0;j<=4;j++ )
	    {

	  	    cout<<"*";
	    
        }
	        cout<<endl;
 	    } 

}
}
void D()
{      
    cout<<endl<<endl;
    for(int i=0;i<=13;i++)
    {
        if(i<=2||i>=11)
        {   
            for(int j=0;j<=19;j++)
            {
                cout<<"*";
            }
        }
        else if(i>=3&&i<=10)
        {
            for(int j=0;j<=5;j++)
            {
                cout<<"*";
            }
            cout<<"        ";
            for(int j=0;j<=5;j++)
            {
                cout<<"*";
            }
        }
        
        cout<<endl;
    }
}
};
int main()
{   
    alphabet make;
    char let;
    make.C();
    make.A();
    make.B();
    make.I();
    make.D();
	return 0;
}
