//Task 1 
# include <iostream>

using namespace std;

int main() {

  int counter = 0;

//while {counter > 100}
  while (counter < 100) {
       if (counter % 2 == 1) {
            cout << counter << " is odd." << endl;
       //else
       } else {
          //cout << counter << " is odd." << endl;
            cout << counter << " is even." << endl;
         }
    ++counter;
  }

  system("pause");
  return 0;
}

//======================================================
//Task 2
//Outputs about below code are `3, 4, 5`.
//Inside the int while loop following calculation are operated.

// Loop for the 1st time
// I = I + 2 = -2 + 2 = 0
// K = 5 - 1 = 4
// I + K = 0 + 4 = 4

// Loop for the 2nd time
// I = I + 2 = 0 + 2 = 2
// K = 4 - 1 = 3
// I + K = 2 + 3 = 5

// Loop for the 3rd time
// I = I + 2 = 2 + 2 = 4
// K = 3 - 1 = 2
// I + K = 4 + 2 = 5

// Loop for the 4rd time
// I = I + 2 = 4 + 2 = 6
// K = 2 - 1 = 1
// I + K = 6 + 1 = 7
//But this time I = 6, greater than K so while loop breaks

# include <iostream>

using namespace std;

int main () {
   
  int K = 5;
  int I = -2;
  
  while (I <= K) {
    I = I + 2;
    --K; 
    cout << (I + K) << endl;
  } 

  system("pause");
  return 0;
}

//======================================================
//Task 3
//Outputs about below code are `3, 2, 1, 0, -1`.
//Inside the int while loop following calculation are operated.

// Loop for the 1st time
// number 4 - 1 = 3

// Loop for the 2nd time
// number 3 - 1 = 2

// Loop for the 3rd time
// number 2 - 1 = 1

// Loop for the 4th time
// number 1 - 1 = 0

// Loop for the 4th time
// number 0 - 1 = -1

// Loop for the 5th time
// number -1 - 1 = -2
// However while loop breaks when int number is less than -1
// while loop only operate when int number is greater than 0 so this time loop is broken


# include <iostream>

using namespace std;

int main() {
  
  int number = 4;
  
  while (number >= 0) {
     --number;
     cout << number << endl;
  } 

  system("pause");
  return 0;
}

//======================================================
//Task 4
# include<iostream>

using namespace std;

int main() {
  
  int n;

  cout << "Please enter multiplication size(1-15): " << endl; 
  cin >> n;
   
   cout << endl;

   for (int row = 1; row <= n; row++) {
       cout << " " << row;
   }
   cout << endl;
      
   for (int row = 1; row <= n; row++) {
       cout << row << " ";
      for (int col = 1; col <= n; col++) {
       cout << col * n <<  " ";
      }
     cout << endl;

    }
     cout << endl; 
    
    system("pause");
    return 0;
}