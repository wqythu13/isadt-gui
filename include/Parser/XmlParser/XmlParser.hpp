//
//  Model.hpp
//
//  Created by Jinlong He on 2019/11/14.
//  Copyright © 2019 All rights reserved.
//

#ifndef Parser_XML_hpp 
#define Parser_XML_hpp
#include "tinyxml2.h"
#include "../../Model/Model.hpp"
using namespace tinyxml2;
namespace isadt {
    class XmlParser {
    public:
        static void parse(const char* fileName, Model* model);
        static void parseClassDiagram(XMLElement* root, Model* model);
        static void parseProcessToSMs(XMLElement* root, Model* model);
        static void parseUserType(XMLElement* root, Model* model);
        static void parseProcess(XMLElement* root, Model* model);
        static void parseCommChannel(XMLElement* root, Model* model);
        static Attribute* parseAttribute(XMLElement* root, Struct* s, Model* model);
        static Method* parseMethod(XMLElement* root, Class* c, Model* model);
        static CommMethod* parseCommMethod(XMLElement* root, Process* p, Model* model);
        static StateMachine* parseStateMachine(XMLElement* root, Model* model, Process* proc);
        static Edge* parseEdge(XMLElement* root, Model* model, Process* proc, StateMachine* sm);
        static void parseInitialKnowledge(XMLElement* root, Model* model);
        static void parseK(XMLElement* root, Model* model);
        static void parseKP(XMLElement* root, Model* model);
        static void parseSafetyProperty(XMLElement* root, Model* model);
        static void parseSecurityProperty(XMLElement* root, Model* model);
        static void parseCTL(XMLElement* root, Model* model);
        static void parseInv(XMLElement* root, Model* model);
        static void parseConfidential(XMLElement* root, Model* model);
        static void parseIntegrity(XMLElement* root, Model* model);
        static void parseAvailability(XMLElement* root, Model* model);
    };
}

#endif /* Parser_XML_hpp */
