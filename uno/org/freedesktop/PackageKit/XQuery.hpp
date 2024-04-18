#ifndef INCLUDED_ORG_FREEDESKTOP_PACKAGEKIT_XQUERY_HPP
#define INCLUDED_ORG_FREEDESKTOP_PACKAGEKIT_XQUERY_HPP

#include "sal/config.h"

#include "org/freedesktop/PackageKit/XQuery.hdl"

#include "com/sun/star/uno/XInterface.hpp"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"
#include "rtl/ustring.hxx"
#include "sal/types.h"

#if defined LIBO_INTERNAL_ONLY
#include <type_traits>
#endif

namespace org { namespace freedesktop { namespace PackageKit {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::org::freedesktop::PackageKit::XQuery const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        typelib_static_mi_interface_type_init( &the_type, "org.freedesktop.PackageKit.XQuery", 0, 0 );
    }
    return * reinterpret_cast< ::css::uno::Type * >( &the_type );
}

} } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::uno::Reference< ::org::freedesktop::PackageKit::XQuery > const *) {
    return ::cppu::UnoType< ::css::uno::Reference< ::org::freedesktop::PackageKit::XQuery > >::get();
}

::css::uno::Type const & ::org::freedesktop::PackageKit::XQuery::static_type(SAL_UNUSED_PARAMETER void *) {
    return ::cppu::UnoType< ::org::freedesktop::PackageKit::XQuery >::get();
}

#if defined LIBO_INTERNAL_ONLY
namespace cppu::detail {
template<> struct IsUnoInterfaceType<::org::freedesktop::PackageKit::XQuery>: ::std::true_type {};
}
#endif

#endif // INCLUDED_ORG_FREEDESKTOP_PACKAGEKIT_XQUERY_HPP
