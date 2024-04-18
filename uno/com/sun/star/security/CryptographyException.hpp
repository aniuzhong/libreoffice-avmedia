#ifndef INCLUDED_COM_SUN_STAR_SECURITY_CRYPTOGRAPHYEXCEPTION_HPP
#define INCLUDED_COM_SUN_STAR_SECURITY_CRYPTOGRAPHYEXCEPTION_HPP

#include "sal/config.h"

#include "com/sun/star/security/CryptographyException.hdl"

#include "com/sun/star/uno/SecurityException.hpp"
#include "com/sun/star/uno/Type.hxx"
#include "cppu/unotype.hxx"

namespace com { namespace sun { namespace star { namespace security {

inline CryptographyException::CryptographyException(
#if defined LIBO_USE_SOURCE_LOCATION
    std::experimental::source_location location
#endif
    )
    : ::css::uno::SecurityException(
#if defined LIBO_USE_SOURCE_LOCATION
    location
#endif
)
{ }

inline CryptographyException::CryptographyException(const ::rtl::OUString& Message_, const ::css::uno::Reference< ::css::uno::XInterface >& Context_
#if defined LIBO_USE_SOURCE_LOCATION
    , std::experimental::source_location location
#endif
)
    : ::css::uno::SecurityException(Message_, Context_
#if defined LIBO_USE_SOURCE_LOCATION
    , location
#endif
)
{ }

#if !defined LIBO_INTERNAL_ONLY
CryptographyException::CryptographyException(CryptographyException const & the_other): ::css::uno::SecurityException(the_other) {}

CryptographyException::~CryptographyException() {}

CryptographyException & CryptographyException::operator =(CryptographyException const & the_other) {
    //TODO: Just like its implicitly-defined counterpart, this function definition is not exception-safe
    ::css::uno::SecurityException::operator =(the_other);
    return *this;
}
#endif

} } } }

namespace com { namespace sun { namespace star { namespace security {

inline ::css::uno::Type const & cppu_detail_getUnoType(SAL_UNUSED_PARAMETER ::css::security::CryptographyException const *) {
    static typelib_TypeDescriptionReference * the_type = 0;
    if ( !the_type )
    {
        const ::css::uno::Type& rBaseType = ::cppu::UnoType< const ::css::uno::SecurityException >::get();

        typelib_static_compound_type_init( &the_type, typelib_TypeClass_EXCEPTION, "com.sun.star.security.CryptographyException", rBaseType.getTypeLibType(), 0,  0 );
    }
    return * reinterpret_cast< const ::css::uno::Type * >( &the_type );
}

} } } }

SAL_DEPRECATED("use cppu::UnoType") inline ::css::uno::Type const & SAL_CALL getCppuType(SAL_UNUSED_PARAMETER ::css::security::CryptographyException const *) {
    return ::cppu::UnoType< ::css::security::CryptographyException >::get();
}

#endif // INCLUDED_COM_SUN_STAR_SECURITY_CRYPTOGRAPHYEXCEPTION_HPP
