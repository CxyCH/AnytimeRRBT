// This file is part of V-REP, the Virtual Robot Experimentation Platform.
// 
// Copyright 2006-2014 Coppelia Robotics GmbH. All rights reserved. 
// marc@coppeliarobotics.com
// www.coppeliarobotics.com
// 
// V-REP is dual-licensed, under the terms of EITHER (at your option):
//   1. V-REP commercial license (contact us for details)
//   2. GNU GPL (see below)
// 
// GNU GPL license:
// -------------------------------------------------------------------
// V-REP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// V-REP IS DISTRIBUTED "AS IS", WITHOUT ANY EXPRESS OR IMPLIED
// WARRANTY. THE USER WILL USE IT AT HIS/HER OWN RISK. THE ORIGINAL
// AUTHORS AND COPPELIA ROBOTICS GMBH WILL NOT BE LIABLE FOR DATA LOSS,
// DAMAGES, LOSS OF PROFITS OR ANY OTHER KIND OF LOSS WHILE USING OR
// MISUSING THIS SOFTWARE.
// 
// See the GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with V-REP.  If not, see <http://www.gnu.org/licenses/>.
// -------------------------------------------------------------------
//
// This file was automatically created for V-REP release V3.1.2 on June 16th 2014

#pragma once

#include "MainCont.h"
#include "DynMaterialObject.h"

class CDynMaterialContainer : public CMainCont 
{
public:
	CDynMaterialContainer();
	virtual ~CDynMaterialContainer();
	void newSceneProcedure();
	void simulationAboutToStart();
	void simulationEnded();
	void renderYour3DStuff(CViewableBase* renderingObject,int displayAttrib);

	CDynMaterialObject* getObject(int objectID);
	CDynMaterialObject* getObject(const char* objectName);
	CDynMaterialObject* getObjectAtIndex(int index);
	CDynMaterialObject* getDefaultObject();
	CDynMaterialObject* getRestStackGraspMaterial();
	int addObject(CDynMaterialObject* anObject,bool objectIsADuplicateThatShouldExistOnItsOwn);
	void getMinAndMaxNameSuffixes(int& minSuffix,int& maxSuffix);
	bool canSuffix1BeSetToSuffix2(int suffix1,int suffix2);
	void setSuffix1ToSuffix2(int suffix1,int suffix2);
	int getSameObjectID(CDynMaterialObject* anObject);
	void removeObject(int objectID);

	void storeDynMaterialObject(CSer& ar,CDynMaterialObject* it);
	CDynMaterialObject* loadDynMaterialObject(CSer& ar,std::string theName,bool &noHit);

	// Variable that need to be serialized on an individual basis:
	std::vector<CDynMaterialObject*> _allDynMaterialObjects;
protected:
	void _removeAllObjects();
	CDynMaterialObject* _getEquivalentDynMaterialObject(CDynMaterialObject* theData);
};
