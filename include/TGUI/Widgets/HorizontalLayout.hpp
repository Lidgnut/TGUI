/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// TGUI - Texus' Graphical User Interface
// Copyright (C) 2012-2017 Bruno Van de Velde (vdv_b@tgui.eu)
//
// This software is provided 'as-is', without any express or implied warranty.
// In no event will the authors be held liable for any damages arising from the use of this software.
//
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it freely,
// subject to the following restrictions:
//
// 1. The origin of this software must not be misrepresented;
//    you must not claim that you wrote the original software.
//    If you use this software in a product, an acknowledgment
//    in the product documentation would be appreciated but is not required.
//
// 2. Altered source versions must be plainly marked as such,
//    and must not be misrepresented as being the original software.
//
// 3. This notice may not be removed or altered from any source distribution.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#ifndef TGUI_HORIZONTAL_LAYOUT_HPP
#define TGUI_HORIZONTAL_LAYOUT_HPP

#include <TGUI/Widgets/BoxLayout.hpp>

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

namespace tgui
{
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    /// @brief Container that automatically resizes children to fit the entire available space between children.
    ///
    /// The children are positioned side by side.
    ///
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class TGUI_API HorizontalLayout : public BoxLayout
    {
    public:
        typedef std::shared_ptr<HorizontalLayout> Ptr; ///< Shared widget pointer
        typedef std::shared_ptr<const HorizontalLayout> ConstPtr; ///< Shared constant widget pointer


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // Default constructor
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        HorizontalLayout(const Layout2d& size = {"100%", "100%"});


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Creates a new horizontal layout widget
        ///
        /// @param size  Size of the horizontal layout
        ///
        /// @return The new horizontal layout
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static HorizontalLayout::Ptr create(const Layout2d& size = {"100%", "100%"});


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        /// @brief Makes a copy of another layout
        ///
        /// @param layout  The other layout
        ///
        /// @return The new layout
        ///
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        static HorizontalLayout::Ptr copy(ConstPtr layout);


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    protected:

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // @brief Repositions and resize the widgets
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual void updateWidgets() override;


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // @brief Makes a copy of the widget
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        virtual Widget::Ptr clone() const override
        {
            return std::make_shared<HorizontalLayout>(*this);
        }


        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    };


    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // TGUI_HORIZONTAL_LAYOUT_HPP
