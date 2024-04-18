#ifndef INCLUDED_COM_SUN_STAR_SDBC_SQLWARNING_HPP
#define INCLUDED_COM_SUN_STAR_SDBC_SQLWARNING_HPP

#include "sal/config.h"

#include "com/sun/star/sdbc/SQLWarning.hdl"

#include "com/sun/star/sdbc/SQLException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace sdbc {

inline SQLWarning::SQLWarning(
#if defined LIBO_USE_SOURCE_LOCATION
    std::experimental::source_location location
#endif
    )
    : ::css::sdbc::SQLException(
#if defined LIBO_USE_SOURCE_LOCATION
    location
#endif
)
{ }

inline SQLWarning::SQLWarning(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_, const ::rtl::OUString& SQLState_, const ::sal_Int32& ErrorCode_, const ::css::uno::Any& NextException_
#if defined LIBO_USE_SOURCE_LOCATION
    , std::experimental::source_location location
#endif
)
    : ::css::sdbc::SQLException(Message_, Context_, SQLState_, ErrorCode_, NextException_
#if defined LIBO_USE_SOURCE_LOCATION
    , location
#endif
)
{ }

#if !defined LIBO_INTERNAL_ONLY
SQLWarning::SQLWarning(SQLWarning const & the_other): ::css::sdbc::SQLException(the_other) {}

SQLWarning::~SQLWarning() {}

SQLWarning & SQLWarning::operator =(SQLWarning const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::sdbc::SQLException::operator =(the_other);
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace sdbc {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::sdbc::SQLWarning const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::css::uno::Type& rBaseType = ::cppu::UnoType< const ::css::sdbc::SQLException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.sdbc.SQLWarning", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::sdbc::SQLWarning const *) {
    return ::cppu::UnoType< ::css::sdbc::SQLWarning >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SDBC_SQLWARNING_HPP
