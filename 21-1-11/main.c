//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int i=1,j;
//    i=2,(j=3,j+4);
//    printf("%d",(i++));
//}
//#include<stdio.h>
//#define M(N) (N+2)%7? (N+2)%7:7
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    printf("%d",M(n));
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    int suma=0,sumb=0,flag=0,i=1,flaga=0,flagb=0;
//    char a;
//    while(scanf("%c",&a)&&a!='\n')
//    {
//        if(a==' '&&!flag)
//        {
//            flag=1;
//            i=1;
//            continue;
//        }
//        if(!flag)
//        {
//            if(isdigit(a))
//            {
//                suma*=i;
//                suma+=a-'0';
//            }
//            else
//            {
//                flaga=1;
//            }
//        }
//        if(flag)
//        {
//            if(isdigit(a))
//            {
//                sumb*=i;
//                sumb+=a-'0';
//            }
//            else
//            {
//                flagb=1;
//            }
//        }
//        i=10;
//    }
//    if(suma<1||suma>1000)
//        flaga=1;
//    if(sumb<1||sumb>1000)
//        flagb=1;
//    if(flaga||flagb)
//    {
//        if(flaga&&flagb)
//            printf("? + ? = ?");
//        else if(flaga)
//            printf("? + %d = ?",sumb);
//        else
//            printf("%d + ? = ?",suma);
//    }
//    else
//        printf("%d + %d = %d",suma,sumb,suma+sumb);
//}
//#include<stdio.h>
//int main()
//{
//    printf("I\n \nL\no\nv\ne\n \nG\nP\nL\nT\n");
//}
//#include<stdio.h>
//#include<stdlib.h>
//int cmp(const void* a,const void* b)
//{
//    return *(int*)b-*(int*)a;
//}
//int main()
//{
//    int index[11],arr[10],i,j,count=0;
//    for(i=0;i<10;i++)
//        arr[i]=-1;
//    char tmp;
//    for(i=0;i<11;i++)
//    {
//        scanf("%c",&tmp);
//        if(arr[tmp-'0']==-1)
//            count++;
//        arr[tmp-'0']=tmp-'0';
//        index[i]=tmp-'0';
//    }
//    qsort(arr,10,sizeof(int),cmp);
//    for(i=0;i<11;i++)
//    {
//        for(j=0;j<10;j++)
//        {
//            if(index[i]==arr[j])
//            {
//                index[i]=j;
//                break;
//            }
//        }
//    }
//    printf("int[] arr = new int[]{");
//    for(i=0;i<count;i++)
//    {
//        printf("%d",arr[i]);
//        if(i!=count-1)
//            printf(",");
//    }
//    printf("};");
//    printf("\nint[] index = new int[]{%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,%d};",index[0],index[1],index[2],index[3],index[4],index[5],index[6],index[7],index[8],index[9],index[10]);
//    return 0;
//}
//#include<stdio.h>
//#include<math.h>
//void pan(int n)
//{
//    int i;
//    for(i=2;i<sqrt(n);i++)
//    {
//        if(n%i==0)
//        {
//            printf("No");
//            return ;
//        }
//    }
//    if(n==1)
//        printf("No");
//    else
//        printf("Yes");
//}
//int main()
//{
//    int n,i,tmp;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&tmp);
//        pan(tmp);
//        if(i!=n-1)
//            printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    float n;
//    scanf("%f",&n);
//    printf("%.1f",(n-100)*0.9*2);
//    return 0;
//}
//#include<stdio.h>
//typedef struct student
//{
//    int n;
//    int flag;
//    char arr[9];
//}su;
//int main()
//{
//    int n,i,j,flag,count=0;
//    scanf("%d",&n);
//    su stu[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d%s",&stu[i].n,stu[i].arr);
//        stu[i].flag=0;
//    }
//    for(i=0;i<n;i++)
//    {
//        if(stu[i].flag)
//            continue;
//        stu[i].flag=1;
//        if(stu[i].n)
//            flag=0;
//        else
//            flag=1;
//        for(j=n-1;j>=0;j--)
//        {
//            if(stu[j].n==flag&&!stu[j].flag)
//            {
//                printf("%s %s",stu[i].arr,stu[j].arr);
//                stu[j].flag=1;
//                count++;
//                if(count!=n/2)
//                    printf("\n");
//                break;
//            }
//        }
//    }
//    return 0;
//}
//#include<stdio.h>
//float pp(float biao,float weight)
//{
//    if(biao>weight)
//        return biao-weight;
//    else
//        return weight-biao;
//}
//void pan(float height,float weight)
//{
//    float biao=(height-100)*0.9*2;
//    float tmp;
//    if(pp(biao,weight)<biao*0.1)
//        printf("You are wan mei!");
//    else if(weight-biao>=biao*0.1)
//        printf("You are tai pang le!");
//    else
//        printf("You are tai shou le!");
//}
//int main()
//{
//    float n,height,weight,i;
//    scanf("%f",&n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%f %f",&height,&weight);
//        pan(height,weight);
//        if(i!=n-1)
//            printf("\n");
//    }
//    return 0;
//}
