/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
    if (wnd.kbd.KeyIsPressed(VK_RIGHT))
    {
        x0++;
    }
    if (wnd.kbd.KeyIsPressed(VK_LEFT))
    {
        x0--;
    }
    if (wnd.kbd.KeyIsPressed(VK_UP))
    {
        y0--;
    }
    if (wnd.kbd.KeyIsPressed(VK_DOWN))
    {
        y0++;
    }
    /*if (wnd.kbd.KeyIsPressed('W'))
    {
        y1++;
    }
    if (wnd.kbd.KeyIsPressed('S'))
    {
        y1--;
    }
    if (wnd.kbd.KeyIsPressed('D'))
    {
        x1++;
    }
    if (wnd.kbd.KeyIsPressed('A'))
    {
        x1--;
    }*/
    if (wnd.mouse.LeftIsPressed())
    {
        x1 = wnd.mouse.GetPosX();
        y1 = wnd.mouse.GetPosY();
    }



}

void Game::ComposeFrame()
{
    
    /*Color C;
    C.SetR(255);
    C.SetG(255);
    C.SetB(0);*/
    //Color C(255, 255, 0);

    //gfx.DrawRect(x0, y0, x0 + width, y0 + height, C );
    gfx.DrawRect(x0, y0, x1, y1, Colors::Cyan);
}
