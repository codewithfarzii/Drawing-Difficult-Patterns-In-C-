#include<iostream>

using namespace std; 
  
class Pattern
{  
   private:
   int Rows,Columns;

    public:
    	Pattern(){
		}
    	Pattern(int r,int c){
    		this->Rows=r;
    		this->Columns=c;
		}
     void PrintPattern()  
     {      
	        
	for (int i = 1; i <=this->Rows ; i++)  
     {  
        for (int j = 1; j <=this->Columns; j++)  
        {  
            if (i == 1 || i ==this->Rows ) 
			{				
				if(j%2==0)
					cout<<"-";				
				else
				cout<<"$";
		}						                         
          else
		  {
		  	if(j==1||j==9)		  
                cout << "$";
				else
				cout<<" ";
        }
		}  
         cout << endl;   
     }
  }
};
  int main()  
{  
    Pattern p(7,18);
    p.PrintPattern();

}  
  
