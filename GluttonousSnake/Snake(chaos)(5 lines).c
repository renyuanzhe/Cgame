main(){int W=15,S=W*W,*m=calloc(S,4),z[2]={0},l=3,c='L',C,i,*p=m;srand(time(0))
;*p=l;f:for(++l;m[i=rand()%S];);for(m[i]--;C-80;_sleep(150)){for(i=system("cls"
),*p=l;i<S;++i%W||puts("|"))printf(m[i]>0&&m[i]--?"[]":m[i]?"00":"  ");if(kbhit
())C=getch()&95,C-1>>2^18||(c^C)&3^2&&(c=C);p=z+c%2,*p+=~-c&2,*p=(--*p+W)%W;p=&
m[*z+z[1]*W];if(*p<0)goto f;if(*p)break;}}

/*
2020.6.26:又压了一点...总共358字符,之前的计算忘了去换行符,应该是369个,以下为原话及旧版
使用gcc编译通过(MinGW)(gcc version 8.2.0)
没想到吧，又压缩了很多...总共374字符,修改&增加了很多细节
1.ijkl控制方向(ijkl更方便位运算...至少比wasd方便)
2.不修改窗口大小,直接用换行代替了,如果窗口不够手动拉伸下
3.增加了p键退出(实现这个就加了3个字符,可以改任意键位)
4.更方便修改地图大小,改W的值就行了(但长宽比固定1:1)
*/

/*
main(){int W=15,S=W*W,m[S],z[2]={0},l=3,c='L',C,i=S,*p=m;while(i--)m[i]=0;srand
(time(0));*p=l;f:for(++l;m[i=rand()%S];);for(m[i]--;C-80;_sleep(150)){for(*p=l,
i=system("cls");i<S;++i%W||puts("|"))printf(m[i]>0&&m[i]--?"[]":m[i]?"00":"  ")
;kbhit()&&(C=getch()&95,C-1>>2^18||(c^C)&3^2&&(c=C));p=z+c%2,*p-=~-c&2^2,*p=(++
*p+W)%W;p=&m[*z+z[1]*W];if(*p<0)goto f;if(*p)break;}}
*/
