#ifndef INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_XDRAGSOURCELISTENER_HPP
#define INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_XDRAGSOURCELISTENER_HPP

#include "sal/config.h"

#include "com/sun/star/datatransfer/dnd/XDragSourceListener.hdl"

#include "com/sun/star/datatransfer/dnd/DragSourceDragEvent.hpp"
#include "com/sun/star/datatransfer/dnd/DragSourceDropEvent.hpp"
#include "com/sun/star/datatransfer/dnd/DragSourceEvent.hpp"
#include "com/sun/star/lang/XEventListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace com { namespace sun { namespace star { namespace datatransfer { namespace dnd {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::datatransfer::dnd::XDragSourceListener const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::lang::XEventListener > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.datatransfer.dnd.XDragSourceListener", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::datatransfer::dnd::XDragSourceListener > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::datatransfer::dnd::XDragSourceListener > >::get();
}

::css::uno::Type const & ::css::datatransfer::dnd::XDragSourceListener::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::datatransfer::dnd::XDragSourceListener >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::css::datatransfer::dnd::XDragSourceListener>: ::std::true_type {};
}
#endif

#endif // INCLUDED_COM_SUN_STAR_DATATRANSFER_DND_XDRAGSOURCELISTENER_HPP
