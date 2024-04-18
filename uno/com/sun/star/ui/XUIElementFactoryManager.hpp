#ifndef INCLUDED_COM_SUN_STAR_UI_XUIELEMENTFACTORYMANAGER_HPP
#define INCLUDED_COM_SUN_STAR_UI_XUIELEMENTFACTORYMANAGER_HPP

#include "sal/config.h"

#include "com/sun/star/ui/XUIElementFactoryManager.hdl"

#include "com/sun/star/ui/XUIElementFactory.hpp"
#include "com/sun/star/ui/XUIElementFactoryRegistration.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace com { namespace sun { namespace star { namespace ui {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::ui::XUIElementFactoryManager const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[2];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::ui::XUIElementFactory > >::get().getTypeLibType();
        aSuperTypes[1] = ::cppu::UnoType< const ::css::uno::Reference< ::css::ui::XUIElementFactoryRegistration > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.ui.XUIElementFactoryManager", 2, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::ui::XUIElementFactoryManager > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::ui::XUIElementFactoryManager > >::get();
}

::css::uno::Type const & ::css::ui::XUIElementFactoryManager::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::ui::XUIElementFactoryManager >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::css::ui::XUIElementFactoryManager>: ::std::true_type {};
}
#endif

#endif // INCLUDED_COM_SUN_STAR_UI_XUIELEMENTFACTORYMANAGER_HPP
