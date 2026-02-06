#include <stdio.h>
#include <stdbool.h> 

bool isPriceAvailable(float prices[], int size, float targetPrice) {
    
    for (int i = 0; i < size; i++) {
        
        if (prices[i] == targetPrice) {
            
            return true;
        }
    }
    
    return false;
}

int main() {
    
    float productPrices[] = {19.99, 45.50, 120.00, 8.75, 50.00, 34.25};
    
    int arraySize = sizeof(productPrices) / sizeof(productPrices[0]);
    
    float customerPrice1 = 45.50;
    float customerPrice2 = 25.00;

   
    if (isPriceAvailable(productPrices, arraySize, customerPrice1)) {
        printf("Price %.2f is available in the system.\n", customerPrice1);
    } else {
        printf("Price %.2f is not available in the system.\n", customerPrice1);
    }

    
    if (isPriceAvailable(productPrices, arraySize, customerPrice2)) {
        printf("Price %.2f is available in the system.\n", customerPrice2);
    } else {
        printf("Price %.2f is not available in the system.\n", customerPrice2);
    }

    return 0;
}