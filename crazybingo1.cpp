#include <iostream>
#include <iomanip>
#include <algorithm>  
#include <ctime>	  // time
#include <cstdlib>	// rand, srand
#include <string.h>
using namespace std;

int randomize(int i) {
	return rand() % i;
}
/*
int search(char pat[], char txt[]) 
{ 

    int M = strlen(pat); 

    int N = strlen(txt); 

  

    /* A loop to slide pat[] one by one */
/*
    for (int i = 0; i <= N - M; i++) { 

        int j = 0; 

  

        /* For current index i, check for pattern match */

//        while(j < M && pat[j] == txt[i+j]){ 
//
//       	j = j+ 1; 

  /*

        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 

             
		return i;
    } 
} 
	return -1;
}
*/
int search(char pat[], char txt[]);
int main() {
	char random2DArray[5][5];
	char tempArray[5][5];	
	char pat[3];
	char pat2[3]; 
	char tempArray2[5];
	char tempArray3[5];
	char tempArray4[5];
	char tempArray5[5];
	char tempArray6[5];
	char bingotxt[]="CRAZY";	
	char tempArray7[5];
        char tempArray8[5];
        char tempArray9[5];
        char tempArray10[5];
        char tempArray11[5];


	
	int w; 


	// seed the random generator so it will be different each time
	srand(unsigned(time(0)));
	
	// mix up the inner arrays
	//for (int i = 0; i < 3; ++i) {
		//random_shuffle(begin(random2DArray[i]), end(random2DArray[i]), //randomize);
	//}
	// mix up the outer array
	////random_shuffle(begin(random2DArray), //end(random2DArray), randomize);
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			random2DArray[i][j]= 
			'0' + rand() % 10 ;
		}
		}
		
/*
	cout << "?!CRAZY BINGO!?"<< endl<<"_________________"<<endl;
	// display the array
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			cout << random2DArray[i][j] << " |";
		}
		cout << endl<<"________________"<<endl;
	}
*/	
		
	for (int i = 0; i < 5; ++i) {
                for (int j = 0; j < 5; ++j) {
                        tempArray[i][j]=
	                        random2DArray[i][j] ;
                		
		}
                }
              
	 for (int i = 0; i < 5; i=i+2) {
                for (int j = 1; j < 5; j+=2) {
                        
			tempArray[i][j]=
                       '*' ;
                }
                }
		
	  for (int i = 1; i < 5; i+=2) {
                for (int j = 0; j < 5; j+=2) {

                        tempArray[i][j]=
                       '*' ;
                }
                }


	/* GAME CARD OUTPUT USING TEMPORARY ARRAY TO HIDE CHARACTERZ */
	  cout << "?! B I N G O!?"<< endl<<"_________________"<<endl;
        // Display the Bingo Card With hidden Values!!!
        for (int i = 0; i < 5; ++i) {
        cout<<bingotxt[i]<<setw(1)<<"|";        
	for (int j = 0; j < 5; ++j) {
                        cout << tempArray[i][j] << " ";
                
               
		}
		cout<<"|";
		if(i<4)
	    cout << "\n";
	}
	cout << endl<<"________________"<<endl;
	
        

/*   Was Displaying the Columns For Error Checking!!!*/
	  for (int i = 0; i < 5; ++i) {
                for (int j = 0; j < 1; ++j) {
                       // cout << random2DArray[i][j] << " |";
                	tempArray7[i]=
                        random2DArray[i][j] ;


		}
               // cout << endl<<"________________"<<endl;
        }
	
	 for (int i = 0; i < 5; ++i) {
                for (int j = 1; j < 2; ++j) {
                       // cout << random2DArray[i][j] << " |";
                	tempArray8[i]=
                        random2DArray[i][j] ;


		}
               // cout << endl<<"________________"<<endl;
        }
	
	 for (int i = 0; i < 5; ++i) {
                for (int j = 2; j < 3; ++j) {
                       // cout << random2DArray[i][j] << " |";
                	tempArray9[i]=
                        random2DArray[i][j] ;

		}
               // cout << endl<<"________________"<<endl;
        }
	
	 for (int i = 0; i < 5; ++i) {
                for (int j = 3; j < 4; ++j) {
                        //cout << random2DArray[i][j] << " |";
                	tempArray10[i]=
                        random2DArray[i][j] ;

		}
               // cout << endl<<"________________"<<endl;
        }
	
	 for (int i = 0; i < 5; ++i) {
                for (int j = 4; j < 5; ++j) {
                       // cout << random2DArray[i][j] << " |";
                	tempArray11[i]=
                        random2DArray[i][j] ;

		}
               // cout << endl<<"________________"<<endl;
        }


	 //cout << "?!CRAZY BINGO!?"<< endl<<"_________________"<<endl;
        // Was displaying  the array columns iteralvely to check accuraccy of values 
        for (int i = 0; i < 1; ++i) {
                for (int j = 0; j < 5; ++j) {
                 //       cout << random2DArray[i][j] << " |";
                	tempArray2[j]=
                        random2DArray[i][j] ;
		//	cout<<tempArray2[i];
				
		}
               // cout << endl<<"________________"<<endl;
        }
	// cout << "Please take a Guess at one of the sequences of numbers by Entering 3 Numbers! " << endl;
       // cin >> pat;
       // cout << endl;
       // search(pat, tempArray2);
	

 

	//cout << "?!CRAZY BINGO!?"<< endl<<"_________________"<<endl;
        // display the array
        for (int i = 1; i < 2; ++i) {
                for (int j = 0; j < 5; ++j) {
                       // cout <<  random2DArray[i][j] << " |";
                	 tempArray3[j]=
                        random2DArray[i][j] ;


		}
              //  cout << endl<<"________________"<<endl;
        }

	 


	 //cout << "?!CRAZY BINGO!?"<< endl<<"_________________"<<endl;
        // display the array
        for (int i = 2; i < 3; ++i) {
                for (int j = 0; j < 5; ++j) {
                   //     cout <<  random2DArray[i][j] << " |";
                	 tempArray4[j]=
                        random2DArray[i][j] ;


		}
              //  cout << endl<<"________________"<<endl;
        }

	  

	
	//cout << "?!CRAZY BINGO!?"<< endl<<"_________________"<<endl;
        // display the array
        for (int i = 3; i < 4; ++i) {
                for (int j = 0; j < 5; ++j) {
                     //   cout <<  random2DArray[i][j] << " |";
                	 tempArray5[j]=
                        random2DArray[i][j] ;


		}
              //  cout << endl<<"________________"<<endl;
        }

	
 

//	cout << "?!CRAZY BINGO!?"<< endl<<"_________________"<<endl;
        // display the array
        for (int i = 4; i < 5; ++i) {
                for (int j = 0; j < 5; ++j) {
                     //   cout << random2DArray[i][j] << " |";
                	 tempArray6[j]=
                        random2DArray[i][j] ;


		}
              //  cout << endl<<"________________"<<endl;
        }

/*
	 for(int i = 0; i < 5; i++){
                cout <<tempArray6[i];   // single array for loops for error checking and printing of each row 

        }

*/
	
	cout << "Please take a Guess at one of the sequences of numbers by Entering 3 Consecutive Numbers! " << endl; 
	cin >> pat;
	cout << "Please take a Second Guess at one of the sequences of numbers by Entering 3 Consecutive Numbers! " << endl;
	cin>>pat2;
	cout << endl; 
	
	//cout << pat[1]; //error check
 	int count1 =  0; 
	w=search(pat,tempArray2); 
	if(w>-1){
	
	cout<<"Found at Row"<<"C"<<"you win"<<endl;
	count1++;
	};
	if(search(pat, tempArray3)>=0){ 	
	cout<<"You Win"<<"ROW R:"<<endl;
	 count1++;
	}
	
	 if(search(pat, tempArray4)>=0){
        cout<<"You Win"<<"ROW A:"<<endl;
         count1++;
	}
	
	 if(search(pat, tempArray5)>=0){
        cout<<"You Win"<<"ROW Z:"<<endl;
         count1++;
	}
	
	 if(search(pat, tempArray6)>=0){
        cout<<"You Win"<<"ROW Y:"<<endl;
         count1++;
	}
	
	 if(search(pat, tempArray7)>=0){
        cout<<"You Win"<<"Column B:"<<endl;
         count1++;
	}

	 if(search(pat, tempArray8)>=0){
        cout<<"You Win"<<"Column I:"<<endl;
         count1++;
	}

	 if(search(pat, tempArray9)>=0){
        cout<<"You Win"<<"Column N:"<<endl;
         count1++;
	}

	 if(search(pat, tempArray10)>=0){
        cout<<"You Win"<<"Column G:"<<endl;
         count1++;
	}

	 if(search(pat, tempArray11)>=0){
        cout<<"You Win"<<"Column O:"<<endl;
         count1++;
	}

	//start of pat 2  

	

	//cout << pat2[1]; //error check
        int count2 = 0; 
	w=search(pat2,tempArray2);
        if(w>-1){
        
        cout<<"Found at Row"<<"C"<<endl;
         count2++;
	};
        if(search(pat2, tempArray3)>=0){
        cout<<"You Win"<<"ROW R:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray4)>=0){
        cout<<"You Win"<<"ROW A:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray5)>=0){
        cout<<"You Win"<<"ROW Z:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray6)>=0){
        cout<<"You Win"<<"ROW Y:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray7)>=0){
        cout<<"You Win"<<"Column B:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray8)>=0){
        cout<<"You Win"<<"Column I:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray9)>=0){
        cout<<"You Win"<<"Column N:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray10)>=0){
        cout<<"You Win"<<"Column G:"<<endl;
         count2++;
	}

         if(search(pat2, tempArray11)>=0){
        cout<<"You Win"<<"Column O:"<<endl;
        cout<<pat2<<endl;
	 count2++;
	}
	
	if(count1<=0){
		cout<<"Im SORRY But " << pat << "LoST" <<endl;
	}	


	if(count2<=0){
                cout<<"Im SORRY But " << setw(3)<<pat2 << setw(3)<< "LoST" <<endl;
        }

	 cout << "?!CRAZY BINGO!?"<< endl<<"_________________"<<endl;
        // display the array
        for (int i = 0; i < 5; ++i) {
                for (int j = 0; j < 5; ++j) {
                        cout << random2DArray[i][j] << " |";
                }
                cout << endl<<"________________"<<endl;
        }



//	for(int i = 0; i < 5; ++i){
//	cout<<tempArray7[i];
//}
	return 0;
}

int search(char pat[], char txt[])
{

    int M = strlen(pat);

    int N = strlen(txt);



    /* A loop to slide pat[] one by one */

    for (int i = 0; i <= N - M; i++) {

        int j = 0;



        /* For current index i, check for pattern match */

        while(j < M && pat[j] == txt[i+j]){

        j = j+ 1;



        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]


                return i;
    }
}
        return -1;
}

