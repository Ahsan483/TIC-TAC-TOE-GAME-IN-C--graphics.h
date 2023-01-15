
#include<graphics.h>
#include <iostream>
using namespace std;
class player1
{
	public:
		bool win;
	    bool turn;
	player1()
	{
		win = false;
		turn = false;
	}
	bool checkwin(int grid[3][3])
	{
	bool check = false;
	//Checking col
	for(int i=0;i<3;i++)
	{
		if(grid[i][0] == 1)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	//col 2
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[i][1] == 1)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	//col 3
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[i][2] == 1)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	
	//row 1
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[0][i] == 1)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	
	//row 2
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[1][i] == 1)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	//row 3
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[i][2] == 1)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	//Checking daignols
	
	check = false;
	if(grid[0][0] == 1 && grid[1][1] == 1 && grid[2][2] == 1)
	{
		check = true;
	}
	else
	{
		check = false;		
	}
	if(check == true)
	{
		return true;
	}
	
	
	//Checking daignols
	
	check = false;
	if(grid[0][2] == 1 && grid[1][1] == 1 && grid[2][0] == 1)
	{
		check = true;
	}
	else
	{
		check = false;		
	}
	if(check == true)
	{
		return true;
	}
	
	
	return check;	
	}
};

class player2{
	public:
		bool win; 
		bool turn;
	
	player2()
	{
		win = false;
		turn = false;
	}	
	bool checkwin(int grid[3][3])
	{
		bool check = false;
	//Checking col
	for(int i=0;i<3;i++)
	{
		if(grid[i][0] == 2)
		{
			check = true;
		} 
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	//col 2
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[i][1] == 2)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	//col 3
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[i][2] == 2)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	
	//row 1
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[0][i] == 2)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	
	//row 2
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[1][i] == 2)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	//row 3
	check = false;
	for(int i=0;i<3;i++)
	{
		if(grid[i][2] == 2)
		{
			check = true;
		}
		else
		{
			check = false;
			break;
		}		
	}
	if(check == true)
	{
		return true;
	}
	
	//Checking daignols
	
	check = false;
	if(grid[0][0] == 2 && grid[1][1] == 2 && grid[2][2] == 2)
	{
		check = true;
	}
	else
	{
		check = false;		
	}
	if(check == true)
	{
		return true;
	}
	
	
	
	//Checking daignols
	
	check = false;
	if(grid[0][2] == 2 && grid[1][1] == 2 && grid[2][0] == 2)
	{
		check = true;
	}
	else
	{
		check = false;		
	}
	if(check == true)
	{
		return true;
	}
	
	//Checking daignols
	
	check = false;
	if(grid[0][2] == 2 && grid[1][1] == 2 && grid[2][0] == 2)
	{
		check = true;
	}
	else
	{
		check = false;		
	}
	if(check == true)
	{
		return true;
	}
	
	
	
	return check;	
	}
		
	
	
};

void drawgrid()
{
	
	settextstyle(1,0,1);
	
	outtextxy(250, 100, "TIC TAC TOE");
	setcolor(RED);
	
	line(200,300,500,300); 
	line(200,400,500,400);
	
	
	line(300,200,300,500);
	line(400,200,400,500);
	setcolor(GREEN);
    settextstyle(1,0,1);
	outtextxy(205, 150, "MAKE_VALID_MOVE");
    setcolor(RED);
    settextstyle(1,0,4);
    
}

bool checkgridisfull(int grid[3][3])
{
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(grid[i][j] == 0)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	
	bool restart = false;
	int grid[3][3];
	player1 p1;
	player2 p2;
	initwindow(800,800,"TIC TAC TOE");
	//outtextxy(300, 100, "TIC TAC TOE");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j ++)
		{
			grid[i][j] = 0;
		}
	
	}
	
	
	drawgrid();
	
	int i=0;
	int x,y;
    bool isfull;
	do

    {
	
	
	settextstyle(1,0,4);
	
	    	
	if(p1.turn == true)
    {
	
	p1.win = p1.checkwin(grid);
	    if(p1.win == true)
	    {
	    setcolor(YELLOW);
    	settextstyle(1,0,1);
		outtextxy(235, 520, "PlAYER 1 WON");
		rectangle( 280, 570, 420, 620 );
	    setcolor(WHITE);
	    settextstyle(1,0,1);
	    outtextxy(315, 585, "restart");
	    settextstyle(1,0,4);
	    restart = true;
	
	    }
    }
	else if(p2.turn == true)
	{
	
	p2.win = p2.checkwin(grid);
    	if(p2.win == true)
    	{
    		
	    setcolor(YELLOW);
    	settextstyle(1,0,1);
		outtextxy(235, 520, "PlAYER 2 WON");
		rectangle( 280, 570, 420, 620 );
		setcolor(WHITE);
		settextstyle(1,0,1);
		outtextxy(315, 585, "restart");
		settextstyle(1,0,4);
		restart = true;
	
	
	
	
			
			
			
		}
	}



    isfull = checkgridisfull(grid);
    
	if(isfull == true && p2.win == false && p1.win == false)
    {
    	
	    setcolor(YELLOW);
    	settextstyle(1,0,1);
		outtextxy(205, 520, "______DRAW______");
		rectangle( 280, 570, 420, 620 );
		setcolor(WHITE);
		settextstyle(1,0,1);
		outtextxy(315, 585, "restart");
		settextstyle(1,0,4);
	    restart = true;
	
	
			
			
				
			}
			
            if(i % 2 == 0)
        	{
        	outtextxy(205, 50, "Player 1 Turn");
			p1.turn = true;
			p2.turn = false;	
			}
			else
			{
			outtextxy(205, 50, "Player 2 Turn");
			p2.turn = true;	
			p1.turn = false;	
			}
			if(restart == false)
			{
			getmouseclick(WM_LBUTTONDOWN, x, y);
    
            if( x >= 200 && x <= 300 && y >= 200 && y <= 300  )
        	{
        		if(grid[0][0] == 0)
        		{
					
	        		if(p1.turn == true)
	        		{
	        		
					grid[0][0] = 1;
	        		outtextxy(230, 230, "O");
					}
					else
					{
					
					grid[0][0] = 2;
					outtextxy(230, 230, "X");	
					}
					i++;
			    }
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(GREEN);
    				settextstyle(1,0,1);
					outtextxy(205, 150, "MAKE_VALID_MOVE");
    
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			else if( x >= 300 && x <= 400 && y >= 200 && y <= 300  )
        	{
        		if(grid[0][1] == 0)
        		{
				
				if(p1.turn == true)
        		{
        		grid[0][1] = 1;
        		
				outtextxy(330, 230, "O");
				}
				else
				{
				grid[0][1] = 2;
        		
				outtextxy(330, 230, "X");	
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(GREEN);
    				settextstyle(1,0,1);
					outtextxy(205, 150, "MAKE_VALID_MOVE");
    
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			
			else if( x >= 400 && x <= 500 && y >= 200 && y <= 300  )
        	{
        		if(grid[0][2] == 0)
        		{
				
        		if(p1.turn == true)
        		{
        		
        		grid[0][2] = 1;
				outtextxy(420, 230, "O");
				}
				else
				{
				
        		grid[0][2] = 2;
				outtextxy(420, 230, "X");	
				
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			
			//
			
			
			else if( x >= 200 && x <= 300 && y >= 300 && y <= 400  )
        	{
        		if(grid[1][0] == 0)
        		{
				
        		if(p1.turn == true)
        		{
        		grid[1][0] = 1;
        		
				outtextxy(230, 330, "O");
				}
				else
				{
				grid[1][0] = 2;
        		
				outtextxy(230, 330, "X");	
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			else if( x >= 300 && x <= 400 && y >= 300 && y <= 400  )
        	{
        		if(grid[1][1] == 0)
        		{
				
        		if(p1.turn == true)
        		{
        		
        		grid[1][1] = 1;
        		outtextxy(330, 330, "O");
				}
				else
				{
				
        		grid[1][1] = 2;
				outtextxy(330, 330, "X");	
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			
			else if( x >= 400 && x <= 500 && y >= 300 && y <= 400  )
        	{
        		if(grid[1][2] == 0)
        		{
				
        		if(p1.turn == true)
        		{
        		
        		grid[1][2] = 1;
        		outtextxy(420, 330, "O");
				}
				else
				{
				
        		grid[1][2] = 2;
				outtextxy(420, 330, "X");	
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			
			//
			
			
			else if( x >= 200 && x <= 300 && y >= 400 && y <= 500  )
        	{
        		if(grid[2][0] == 0)
        		{
				
        		if(p1.turn == true)
        		{
        		
        		grid[2][0] = 1;
        		outtextxy(230, 430, "O");
				}
				else
				{
					
        		grid[2][0] = 2;
				outtextxy(230, 430, "X");	
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			else if( x >= 300 && x <= 400 && y >= 400 && y <= 500  )
        	{
        		if(grid[2][1] == 0)
        		{
				
        		if(p1.turn == true)
        		{
        		
        		grid[2][1] = 1;
        		outtextxy(330, 430, "O");
				}
				else
				{
				
        		grid[2][1] = 2;
				outtextxy(330, 430, "X");	
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			
			else if( x >= 400 && x <= 500 && y >= 400 && y <= 500  )
        	{
        		if(grid[2][2] == 0)
        		{
				
        		if(p1.turn == true)
        		{
        		
        		grid[2][2] = 1;
				outtextxy(420, 430, "O");
				}
				else
				{
				
        		grid[2][2] = 2;
				outtextxy(420, 430, "X");	
				}
				i++;
				}
				else
				{
					settextstyle(1,0,1);
					outtextxy(205, 150, "___INVALIDMOVE___");
					delay(2000);
					setcolor(RED);
    				settextstyle(1,0,4);
    				
    
				}
			}
			
		}
		else
		{
			getmouseclick(WM_LBUTTONDOWN, x, y);
			if(x >= 280 &&  x <= 420  && y >=  570 && y<=620)
			{
			i=0;
			for(int j=0;j<3;j++)
			{
				for(int k=0;k<3;k++)
				{
					grid[j][k] = 0;
				}
			}
			p1.turn = false;
			p2.turn = false;
			p1.win = false;
			p2.turn = false;
			outtextxy(230, 230, "   ");
			outtextxy(330, 230, "   ");	
			outtextxy(420, 230, "   ");
			outtextxy(230, 330, "   ");
			outtextxy(330, 330, "   ");
			outtextxy(420, 330, "   ");
			outtextxy(230, 430, "   ");
			outtextxy(330, 430, "   ");
			outtextxy(420, 430, "   ");	
			outtextxy(205, 520, "                     ");
			drawgrid();
	        restart = false;
    		}
	
			
		
		}
        delay(100);
    }while(1);
    
	



	getch();
	return 0;
}

