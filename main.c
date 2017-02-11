#include<stdio.h>

int main()
{
    char list[11][10][2] = { {},
   { {3,2} },
   { {3,1}, {7,1} } ,
   { {1,2}, {2,1} , {4,1}, {6,1}, {7,1} },
   { {3,1}, {10,1} },
   { {8,1}, {9,2} },
   { {3,1}, {6,1} },
   { {2,1}, {3,1}, {6,1} },
   { {5,1}, {9,1} },
   { {5,2}, {10,1} },
   { {4,1}, {9,1} }
    };
    char A[] = {1,2,3,4,5};
    char B[] = {6,7,8,9,10};
    char D[11];
    int i,j;
    for(i=1; i<=10; i++) {
        int I, E;
        I=0; E=0;
        for(j=0; (j<=10)&&(list[i][j][0]!=0); j++){
            if (search(A, 5, list[i][j][0])) {I=I+list[i][j][1]; printf("%d is internal", list[i][j][0]); printf(" edges %d\n",list[i][j][1]);}
            else if (search(B, 5, list[i][j][0])) {E=E+list[i][j][1]; printf("%d is external ", list[i][j][0]); printf(" edges %d\n",list[i][j][1]);}
        }
        D[i]=I-E; I=0; E=0;
        printf("D%d is %d\n",i,D[i]);
    }
    printf("%d",list[3][2][1]);
    return 0;

}

int search(char a[], int n, int find) {
   char c;

   for (c = 0 ;c < n ; c++ ) {
      if (a[c] == find)
         return 1;
   }

   return 0;
}
