#ifndef INCLUDED_COM_SUN_STAR_REFLECTION_XARRAYTYPEDESCRIPTION_HPP
#define INCLUDED_COM_SUN_STAR_REFLECTION_XARRAYTYPEDESCRIPTION_HPP

#include "sal/config.h"

#include "com/sun/star/reflection/XArrayTypeDescription.hdl"

#include "com/sun/star/reflection/XTypeDescription.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace com { namespace sun { namespace star { namespace reflection {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::reflection::XArrayTypeDescription const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::reflection::XTypeDescription > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.reflection.XArrayTypeDescription", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::reflection::XArrayTypeDescription > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::reflection::XArrayTypeDescription > >::get();
}

::css::uno::Type const & ::css::reflection::XArrayTypeDescription::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::reflection::XArrayTypeDescription >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::css::reflection::XArrayTypeDescription>: ::std::true_type {};
}
#endif

#endif // INCLUDED_COM_SUN_STAR_REFLECTION_XARRAYTYPEDESCRIPTION_HPP
