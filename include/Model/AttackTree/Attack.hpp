﻿//
//  Attack.hpp
//
//  Created by LauZyHou on 2019/11/15.
//  Copyright © 2019 All rights reserved.
//

#ifndef Model_Attack_hpp
#define Model_Attack_hpp
#include "./AttackNode.hpp"

namespace esc {
	/// \brief the attack protocal bound to attack nodes or attack trees.
	class Attack {
	private:
		bool enable_;
		AttackNode* originNode_;
		bool isLeaf_;
		bool isFinal_;
		bool isRoot_;
	};
}

#endif /* Model_Attack_hpp */
