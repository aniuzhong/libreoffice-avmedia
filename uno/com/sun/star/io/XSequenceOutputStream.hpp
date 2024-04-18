#ifndef INCLUDED_COM_SUN_STAR_IO_XSEQUENCEOUTPUTSTREAM_HPP
#define INCLUDED_COM_SUN_STAR_IO_XSEQUENCEOUTPUTSTREAM_HPP

#include "sal/config.h"

#include "com/sun/star/io/XSequenceOutputStream.hdl"

#include "com/sun/star/io/XOutputStream.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "sal/types.h"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace com { namespace sun { namespace star { namespace io {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::io::XSequenceOutputStream const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::io::XOutputStream > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.io.XSequenceOutputStream", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::io::XSequenceOutputStream > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::io::XSequenceOutputStream > >::get();
}

::css::uno::Type const & ::css::io::XSequenceOutputStream::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::io::XSequenceOutputStream >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::css::io::XSequenceOutputStream>: ::std::true_type {};
}
#endif

#endif // INCLUDED_COM_SUN_STAR_IO_XSEQUENCEOUTPUTSTREAM_HPP
