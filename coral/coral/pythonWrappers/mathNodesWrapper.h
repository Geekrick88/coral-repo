// <license>
// Copyright (C) 2011 Andrea Interguglielmi, All rights reserved.
// This file is part of the coral repository downloaded from http://code.google.com/p/coral-repo.
// 
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// 
//    * Redistributions of source code must retain the above copyright
//      notice, this list of conditions and the following disclaimer.
// 
//    * Redistributions in binary form must reproduce the above copyright
//      notice, this list of conditions and the following disclaimer in the
//      documentation and/or other materials provided with the distribution.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
// IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
// THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
// PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
// CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
// EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
// PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
// LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
// NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// </license>


#ifndef CORAL_MATHNODES_WRAPPER_H
#define CORAL_MATHNODES_WRAPPER_H

#include "../builtinNodes/MathNodes.h"
#include "../src/pythonWrapperUtils.h"

using namespace coral;

void mathNodesWrapper(){
	pythonWrapperUtils::pythonWrapper<Vec3Length, Node>("Vec3Length");
	pythonWrapperUtils::pythonWrapper<Matrix44Inverse, Node>("Matrix44Inverse");
	pythonWrapperUtils::pythonWrapper<Abs, Node>("Abs");
	pythonWrapperUtils::pythonWrapper<Vec3Cross, Node>("Vec3Cross");
	pythonWrapperUtils::pythonWrapper<Vec3Dot, Node>("Vec3Dot");
	pythonWrapperUtils::pythonWrapper<Vec3Normalize, Node>("Vec3Normalize");
	pythonWrapperUtils::pythonWrapper<TrigonometricFunctions, Node>("TrigonometricFunc");
	pythonWrapperUtils::pythonWrapper<Radians, Node>("Radians");
	pythonWrapperUtils::pythonWrapper<Degrees, Node>("Degrees");
	pythonWrapperUtils::pythonWrapper<Atan2, Node>("Atan2");
	pythonWrapperUtils::pythonWrapper<Sqrt, Node>("Sqrt");
	pythonWrapperUtils::pythonWrapper<Ceil, Node>("Ceil");
	pythonWrapperUtils::pythonWrapper<Floor, Node>("Floor");
	pythonWrapperUtils::pythonWrapper<Round, Node>("Round");
	pythonWrapperUtils::pythonWrapper<Exp, Node>("Exp");
	pythonWrapperUtils::pythonWrapper<Pow, Node>("Pow");
	pythonWrapperUtils::pythonWrapper<Log, Node>("Log");
	pythonWrapperUtils::pythonWrapper<Log10, Node>("Log10");
	pythonWrapperUtils::pythonWrapper<Min, Node>("Min");
	pythonWrapperUtils::pythonWrapper<Max, Node>("Max");
	pythonWrapperUtils::pythonWrapper<Average, Node>("Average");
	pythonWrapperUtils::pythonWrapper<Slerp, Node>("Slerp");
	pythonWrapperUtils::pythonWrapper<QuatMultiply, Node>("QuatMultiply");
	pythonWrapperUtils::pythonWrapper<QuatNormalize, Node>("QuatNormalize");
}

#endif
