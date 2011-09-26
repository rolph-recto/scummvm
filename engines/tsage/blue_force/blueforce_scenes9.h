/* ScummVM - Graphic Adventure Engine
 *
 * ScummVM is the legal property of its developers, whose names
 * are too numerous to list here. Please refer to the COPYRIGHT
 * file distributed with this source distribution.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.	 See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 */

#ifndef TSAGE_BLUEFORCE_SCENES9_H
#define TSAGE_BLUEFORCE_SCENES9_H

#include "common/scummsys.h"
#include "tsage/blue_force/blueforce_logic.h"
#include "tsage/blue_force/blueforce_speakers.h"
#include "tsage/converse.h"
#include "tsage/events.h"
#include "tsage/core.h"
#include "tsage/scenes.h"
#include "tsage/globals.h"
#include "tsage/sound.h"

namespace TsAGE {

namespace BlueForce {

using namespace TsAGE;

class Scene900: public PalettedScene {
	/* Items */
	class Item1: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item4: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	/* Objects */
	class Object1: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object2: public NamedObjectExt {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object3: public NamedObjectExt {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object6: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Object7: public NamedObject {
	public:
		bool startAction(CursorType action, Event &event);
	};

	/* Actions */
	class Action1 : public Action {
	public:
		void signal();
	};
	class Action2 : public Action {
	public:
		void signal();
	};
	class Action3 : public Action {
	public:
		void signal();
	};
	class Action4 : public Action {
	public:
		void signal();
	};

public:
	SequenceManager _sequenceManager1, _sequenceManager2;
	SpeakerGameText _gameTextSpeaker;
	SpeakerJakeJacket _jakeJacketSpeaker;
	SpeakerLyleHat _lyleHatSpeaker;
	Item1 _item1;
	Object1 _object1;
	Object2 _object2;
	Object3 _object3;
	NamedHotspot _item2;
	NamedHotspot _item3;
	NamedObject _object4;
	NamedObject _object5;
	Object6 _lyle;
	Object7 _object7;
	Item4 _item4;
	ASoundExt _sound1;
	Action1 _action1;
	Action2 _action2;
	Action3 _action3;
	Action4 _action4;
	int _field1974;
	int _field1976;

	Scene900();
	void postInit(SceneObjectList *OwnerList = NULL);
	void signal();
	void process(Event &event);
	void dispatch();
	void synchronize(Serializer &s);
};

class Scene920: public PalettedScene {
	/* Items */
	class Item1: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};
	class Item8: public NamedHotspot {
	public:
		bool startAction(CursorType action, Event &event);
	};

public:
	SequenceManager _sequenceManager1;
	SpeakerGameText _gameTextSpeaker;
	SpeakerJakeJacket _jakeJacketSpeaker;

	Item1 _crate;
	NamedHotspot _item2;
	NamedHotspot _item3;
	NamedHotspot _item4;
	NamedHotspot _item5;
	NamedHotspot _item6;
	NamedHotspot _item7;
	NamedObject _object1;
	NamedObject _object2;
	NamedObject _object3;
	Item8 _exitN;
	Common::Point _oldCoord;

	void postInit(SceneObjectList *OwnerList = NULL);
	void signal();
	void process(Event &event);
	void dispatch();
	void synchronize(Serializer &s);
};

class Scene935: public PalettedScene {
	/* Actions */
	class Action1 : public Action {
	public:
		void signal();
	};

public:
	ScenePalette _scenePalette;
	SequenceManager _sequenceManager;
	NamedObject _object1;
	NamedObject _object2;
	NamedObject _object3;
	Action1 _action1;
	VisualSpeaker _visualSpeaker;

	void postInit(SceneObjectList *OwnerList = NULL);
	void remove();
	void signal();
	void dispatch();
};

} // End of namespace BlueForce
} // End of namespace TsAGE

#endif
