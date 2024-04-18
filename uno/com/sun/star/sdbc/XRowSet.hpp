#ifndef INCLUDED_COM_SUN_STAR_SDBC_XROWSET_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_XROWSET_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/XRowSet.hdl"

#include "com/sun/star/sdbc/XResultSet.hpp"
#include "com/sun/star/sdbc/XRowSetListener.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::sdbc::XRowSet const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_TypeDescriptionReference * aSuperTypes[1];
        aSuperTypes[0] = ::cppu::UnoType< const ::css::uno::Reference< ::css::sdbc::XResultSet > >::get().getTypeLibType();
        typelib_static_mi_interface_type_init( &the_type, "com.sun.star.sdbc.XRowSet", 1, aSuperTypes );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::css::sdbc::XRowSet > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::css::sdbc::XRowSet > >::get();
}

::css::uno::Type const & ::css::sdbc::XRowSet::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::css::sdbc::XRowSet >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::css::sdbc::XRowSet>: ::std::true_type {};
}
#endif

#endif // INCLUDED_COM_SUN_STAR_SDBC_XROWSET_HPP