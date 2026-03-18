#include <iostream>
using namespace std ;

int linerSearch(int arr[],int x )  {
    for( int i = 0; i <= 5 ; i++){
        
        if (arr[i] == x) {
            return i+1 ; 
            
        }
    }
    return -1 ;
}


int main()
{
    
    int arr[6] = { 10, 20 , 5, 6, 8 } ;
    int x = 20 ; 
    
    int result = linerSearch(arr, x) ; 
    if (result == -1 ){
        cout<< "Element Not found" << endl ; 
    }
    else { 
        cout<< "At index: " << result << endl ; 
    }

return 0 ;     
}
