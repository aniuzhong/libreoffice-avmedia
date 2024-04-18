#ifndef INCLUDED_COM_SUN_STAR_IO_XDATAINPUTSTREAM_HPP
#define INCLUDED_COM_SUN_STAR_IO_XDATAINPUTSTREAM_HPP

#include "sal/config.h"

#include "com/sun/star/io/XDataInputStream.hdl"

#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace com { namespace sun { namespace star { namespace io {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::io::XDataInputStream const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::io::XInputStream > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.io.XDataInputStream", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::io::XDataInputStream > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::io::XDataInputStream > >::get();
}

::css::uno::Type const & ::css::io::XDataInputStream::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::io::XDataInputStream >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::css::io::XDataInputStream>: ::std::true_type {};
}
#endif

#endif // INCLUDED_COM_SUN_STAR_IO_XDATAINPUTSTREAM_HPP
