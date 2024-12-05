#include<stdio.h>
int main(){
    int array[100], option, deleteIndex, addValue, length, odd=0, even=0, checkPrime=0, countPrime=0;
    do{
        printf("\n---MENU---\n");
        printf("1. nhap kich thuoc va gia tri cac phan tu trong mang\n");
        printf("2. in ra cac phan tu trong mang\n");
        printf("3. dem so luong cac phan tu chan le trong mang\n");
        printf("4. tim gia tri lon thu 2 trong mang\n");
        printf("5. them mot phan tu vao trong mang\n");
        printf("6. xoa mot phan tu trong mang\n");
        printf("7. sap xep mang theo thu tu giam dan(insertion sort)\n");
        printf("8. tim kiem phan tu xem co ton tai khong(binary search)\n");
        printf("9. in ra toan bo so nguyen to da duoc binh phuong\n");
        printf("10. sap xep mang theo thu tu giam dan(bubble sort)\n");
        printf("11. thoat\n");
        printf("lua chon cua ban la: ");
        scanf("%d", &option);
        printf("\n");

        if(option==1){
            do{
                printf("nhap kich co cua mang(0<length<100): ");
                scanf("%d", &length);
            }while(length<=0 || length>=100);
                for(int i=0; i<length; i++){
                    printf("nhap phan tu thu %d: ", i+1);
                    scanf("%d", &array[i]);
                }
        } 
        if(option==2){
            for(int i=0; i<length; i++){
                printf("array[%d] = %d\n", i, array[i]);
            }
        }
        if(option==3){
            for(int i=0; i<length; i++){
            if(array[i]%2==0){
                even+=1;

            }else
                odd+=1;
        }
                printf("trong mang co %d phan tu chan va %d phan tu le\n", even, odd);
        }
        if(option==4){
        }
        if(option==5){
            printf("nhap phan tu muon them: ");
            scanf("%d", &addValue);
            array[length]=addValue;
            length+=1;
            printf("mang da duoc them:\n");
            for(int i=0; i<length; i++){
                printf("array[%d] = %d\n", i, array[i]);
            }
        }
        if(option==6){
            do{
                printf("nhap vi tri muon xoa: ");
                scanf("%d", &deleteIndex);
            }while(deleteIndex<=0 || deleteIndex>length);
            deleteIndex-=1;
            for(int i=deleteIndex; i<length; i++){
                array[i]=array[i+1];
                length-=1;
            }
            printf("mang da duoc xoa:\n");
            for(int i=0; i<length; i++){
                printf("array[%d] = %d\n", i, array[i]);
            }
        }
        if(option==7){
            for(int i=1; i<length; i++){
                int key=array[i];
                int j=i-1;
                while(j>=0 && array[j]>key){
                    array[j+1]=array[j];
                    j-=1;
                }
                array[j+1]=key;
            }
            printf("mang da duoc sap xep la:\n");
            for(int i=length-1; i>=0; i--){
                printf("array[%d] = %d\n", i, array[i]);
            }
        }
        if(option==8){
        }
        if(option==9){
            printf("cac so nguyen to da duoc binh phuong trong mang la: ");
            for(int i=0; i<length; i++){
                checkPrime=0;
                for(int j=2; j<array[i]; j++){
                    if(array[i]%j==0){
                        checkPrime=1;
                    }
                }
            if(checkPrime==0 && array[i]!=1){
                printf("%lld ", array[i]*array[i]);
                countPrime+=1;
            }
            }
            if(countPrime==0){
                printf("khong co so nguyen to trong mang");
            }
        }
        if(option==10){
            for(int i=0; i<length-1;i++){
                for(int j=0; j<length-i-1; j++){
                    if(array[j]>array[j+1]){
                        int temp = array[j+1];
                        array[j+1]=array[j];
                        array[j]=temp;
                    }
                }
            }
            printf("mang da duoc sap xep la:\n");
            for(int i=length-1; i>=0; i--){
                printf("array[%d] = %d\n", i, array[i]);
            }

        }
    }while(option!=11);
    printf("da thoat chuong trinh");
    return 0;
}