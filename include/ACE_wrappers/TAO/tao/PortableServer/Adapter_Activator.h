// -*- C++ -*-

//=============================================================================
/**
 *  @file    Adapter_Activator.h
 *
 *  $Id: Adapter_Activator.h 935 2008-12-10 21:47:27Z mitza $
 */
//=============================================================================

#ifndef TAO_ADAPTER_ACTIVATOR_H
#define TAO_ADAPTER_ACTIVATOR_H
#include /**/ "ace/pre.h"

#include "tao/PortableServer/portableserver_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/AdapterActivatorC.h"

#if (TAO_HAS_MINIMUM_POA == 0)
#if !defined (CORBA_E_COMPACT) && !defined (CORBA_E_MICRO)

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace PortableServer
{
  class POAManager;

  typedef POAManager *POAManager_ptr;
  typedef TAO_Objref_Var_T<POAManager> POAManager_var;
}

namespace TAO
{
  namespace Portable_Server
  {
    class TAO_PortableServer_Export Adapter_Activator
      : public PortableServer::AdapterActivator
    {
    public:
      Adapter_Activator (PortableServer::POAManager_ptr poa_manager);

      CORBA::Boolean unknown_adapter (PortableServer::POA_ptr parent,
                                      const char *name);

    protected:

      /// POA Manager
      PortableServer::POAManager_var poa_manager_;
    };
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif
#endif /* TAO_HAS_MINIMUM_POA == 0 */

#include /**/ "ace/post.h"
#endif /* TAO_ADAPTER_ACTIVATOR_H */
