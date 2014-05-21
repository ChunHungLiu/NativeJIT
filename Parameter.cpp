#include "stdafx.h"

#include <iostream>     // TODO: Delete this file after removing all references to std::cout.

#include "ExpressionTree.h"
#include "Parameter.h"


namespace NativeJIT
{
    ParameterBase::ParameterBase(ExpressionTree& tree)
        : m_position(tree.AddParameter(*this))
    {
    }


    unsigned ParameterBase::GetPosition() const
    {
        return m_position;
    }


    void ParameterBase::PrintParameter() const
    {
        std::cout << "Parameter " << m_position << std::endl;
    }
}
