/******************************************************************************
**  Copyright (c) 2007-2008, Calaos. All Rights Reserved.
**
**  This file is part of Calaos Home.
**
**  Calaos Home is free software; you can redistribute it and/or modify
**  it under the terms of the GNU General Public License as published by
**  the Free Software Foundation; either version 3 of the License, or
**  (at your option) any later version.
**
**  Calaos Home is distributed in the hope that it will be useful,
**  but WITHOUT ANY WARRANTY; without even the implied warranty of
**  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**  GNU General Public License for more details.
**
**  You should have received a copy of the GNU General Public License
**  along with Foobar; if not, write to the Free Software
**  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**
******************************************************************************/
#include <Condition.h>

using namespace Calaos;

Condition::~Condition()
{
}

void Condition::Add(Input *in)
{
        inputs.push_back(in);
}

void Condition::Remove(int pos)
{
        vector<Input *>::iterator iter = inputs.begin();
        for (int i = 0;i < pos;iter++, i++) ;
        inputs.erase(iter);
}

void Condition::removeScriptInput(int pos)
{
        vector<Input *>::iterator iter = in_event.begin();
        for (int i = 0;i < pos;iter++, i++) ;
        in_event.erase(iter);
}

void Condition::removeScriptInput(Input *in)
{
        vector<Input *>::iterator iter = in_event.begin();
        for (int i = 0;i < (int)in_event.size() && in != in_event[i];iter++, i++) ;
        in_event.erase(iter);
}
