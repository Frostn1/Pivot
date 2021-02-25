#include <stdio.h>

// Token id's
enum {


	// Runes
	T_Inf, // inf
	T_Tilda, // ~
	T_At, // @
	T_Hash, // #
	//T_Dollar, // $


	// Conditionals
	T_ExMark, // !
	T_LogicAnd, // &&
	T_LogicOr, // ||
	//T_LogicXor, // ..


	// Math Symbols
	T_Mul, // *
	T_Add, // +
	T_Sub, // -
	T_Div, // /
	//T_Module, // %
	//T_Exponent, // ^


	// Flow Modifiers
	T_LParen, // (
	T_RParen, // }
	T_LBrace, // {
	T_RBrace, // }
	T_LBracket, // [
	T_RBracket, // ]
	T_LChevron, // <
	T_RChevron, // >


	// Addtionals
	T_Ampersand, // &
	T_SemiColon, // ;


	// Assign
	T_Assign, // =
	T_ArrowAssign, // =>
	T_AssignMul, // *=
	T_AssignAdd, // +=
	T_AssignSub, // -=
	T_AssignDiv, // /=


	// Wrappers
	T_DoubleQuotes, // "
	T_Quote, // '
	//T_BackTick, // `


	// Unknown { Name tbd }
	T_Unknown1, // <> Name tbd
	T_Unknown2, // <=> Name tbd
	T_Unknown3, // .> Name tbd

	//KeyWords

		// IO
		T_Output, // print
		T_Input, // read
	

		// Data Types
		T_Digital, // digital
		T_Char, // char
		T_Str, //str
		T_Chain, // chain
		T_Condi, // conditional

		// Functions
		T_Func, // func
		T_Return, // return

		//Including Other Code
		T_Import, // import
		T_From, // from
		// import a module from a piece of code in the following order
		// import someModule from 'someFile.pi' 
		// ( js style )



};

