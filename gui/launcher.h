/* ScummVM - Scumm Interpreter
 * Copyright (C) 2002 The ScummVM project
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * $Header$
 */

#ifndef LAUNCHER_DIALOG_H
#define LAUNCHER_DIALOG_H

#include "dialog.h"
#include "common/str.h"

class LauncherDialog : public Dialog {
	typedef ScummVM::String String;
public:
	LauncherDialog(NewGui *gui);

	void handleCommand(CommandSender *sender, uint32 cmd, uint32 data);

protected:
};

#endif
