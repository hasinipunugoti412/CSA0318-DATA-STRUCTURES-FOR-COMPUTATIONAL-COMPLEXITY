#include <stdio.h>
int main()
{
    int array[50], position, c, m, value;    
    printf("Enter number of elements in the array\n");
    scanf("%d", &m);    
    printf("Enter %d elements\n", m);   
    for (c = 0; c < m; c++)
	{    
        scanf("%d", &array[c]);    
    }
    printf("enter the location to insert an new element\n");
    scanf("%d", &position);   
    printf("enter the value\n");
    scanf("%d", &value);    
    for (c = m - 1; c >= position - 1; c--) 
        array[c+1] = array[c];   
    array[position-1] = value;    
    printf("Resultant array is\n");    
    for (c = 0; c <= m; c++)    
        printf("%d\n", array[c]);        
    
    int  n;    
    printf("Enter number of elements in array\n");
    scanf("%d", &n);    
    printf("Enter %d elements\n", n);    
    for ( c = 0 ; c < n ; c++ )
    scanf("%d", &array[c]);   
    printf("Enter the location to delete element\n");
    scanf("%d", &position);    
    if ( position >= n+1 )    
    printf("Deletion not possible.\n");    
    else
    {    
        for ( c = position - 1 ; c < n - 1 ; c++ ) 
        array[c] = array[c+1];                
        printf("Resultant array is\n");        
        for( c = 0 ; c < n - 1 ; c++ )        
        printf("%d\n", array[c]);        
    }    
}
