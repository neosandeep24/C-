#include<graphics.h>
int main()
{
    initwindow(600,600,"Snowman");
    setbkcolor(BLUE);
    cleardevice();
    setcolor(BLACK);
    circle(300,240,60);
    arc(310,270,45,90,50);
    arc(290,270,90,135,50);
    arc(300,230,240,300,50);

    setcolor(BLACK);
    rectangle(280,300,320,500);

    setcolor(BLACK);
    circle(300,400,100);
    setcolor(YELLOW);
    settextstyle(COMPLEX_FONT,HORIZ_DIR,5);
    outtextxy(200,20,"THE SNOWMAN");


    // POINT cursorpos;
    // while(1)
    // {
    //  GetCursorPos(&cursorpos);
    //  circle(cursorpos.x,cursorpos.y,50);
    //  if(GetAsyncKeyState(VK_LBUTTON))
    //  {
    //     break;
    //  }
    //  delay(100);
    //  //cleardevice();

    // }


    // int x=100,i;
    // while (1)
    // {cleardevice();
    //     for(i=0;i<=20;i++)
    //     {
    //         setcolor(RED);
    //         rectangle(x+i,400+i,x+400-i,600-i);
    //         setcolor(GREEN);
    //         circle(x+50,600+50,50-i);
    //         circle(x+400-50,600+50,50-i);
    //     }
    //     if(GetAsyncKeyState(VK_RIGHT))
    //     x+=10;
    //     else if(GetAsyncKeyState(VK_LEFT))
    //      x-=10;
    //     else if(GetAsyncKeyState(VK_ESCAPE))
    //     break;
    //     delay(10);  
    // }
    
    getch();
    closegraph();
    //    return 0;
}