// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0a
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/


// TAO_IDL - Generated from 
// .\be\be_codegen.cpp:651

#ifndef _TAO_IDL_REALLONGS_LUOBXT_CPP_
#define _TAO_IDL_REALLONGS_LUOBXT_CPP_


#include "../include/RealLongS.h"
#include "tao/PortableServer/Operation_Table_Perfect_Hash.h"
#include "tao/PortableServer/Upcall_Command.h"
#include "tao/PortableServer/Upcall_Wrapper.h"
#include "tao/TAO_Server_Request.h"
#include "tao/ORB_Core.h"
#include "tao/Profile.h"
#include "tao/Stub.h"
#include "tao/IFR_Client_Adapter.h"
#include "tao/Object_T.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/DynamicC.h"
#include "tao/CDR.h"
#include "tao/operation_details.h"
#include "tao/PortableInterceptor.h"
#include "ace/Dynamic_Service.h"
#include "ace/Malloc_Allocator.h"

#if !defined (__ACE_INLINE__)
#include "../include/RealLongS.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// .\be\be_interface.cpp:1714

class TAO_StandardInterfaces_RealLong_Perfect_Hash_OpTable
  : public TAO_Perfect_Hash_OpTable
{
private:
  unsigned int hash (const char *str, unsigned int len);

public:
  const TAO_operation_db_entry * lookup (const char *str, unsigned int len);
};

/* C++ code produced by gperf version 2.8 (ACE version) */
/* Command-line: ace_gperf -m -M -J -c -C -D -E -T -f 0 -F 0,0 -a -o -t -p -K opname -L C++ -Z TAO_StandardInterfaces_RealLong_Perfect_Hash_OpTable -N lookup  */
unsigned int
TAO_StandardInterfaces_RealLong_Perfect_Hash_OpTable::hash (const char *str, unsigned int len)
{
  static const unsigned char asso_values[] =
    {
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16, 16, 16, 16,  0, 16,  0, 16, 16,
      0,  5, 16, 16, 16, 16, 16, 16, 16, 16,
     16, 16,  2, 16, 16, 16,  0, 16, 16, 16,
     16, 16, 16, 16, 16, 16, 16, 16,
    };
  return len + asso_values[(int) str[len - 1]] + asso_values[(int) str[0]];
}

const TAO_operation_db_entry *
TAO_StandardInterfaces_RealLong_Perfect_Hash_OpTable::lookup (const char *str, unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 6,
      MIN_WORD_LENGTH = 5,
      MAX_WORD_LENGTH = 14,
      MIN_HASH_VALUE = 5,
      MAX_HASH_VALUE = 15,
      HASH_VALUE_RANGE = 11,
      DUPLICATES = 0,
      WORDLIST_SIZE = 11
    };

  static const TAO_operation_db_entry wordlist[] =
    {
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_is_a", &POA_StandardInterfaces::RealLong::_is_a_skel, 0},
      {"",0,0},{"",0,0},{"",0,0},{"",0,0},
      {"_component", &POA_StandardInterfaces::RealLong::_component_skel, 0},
      {"",0,0},
      {"pushPacket", &POA_StandardInterfaces::RealLong::pushPacket_skel, 0},
      {"_non_existent", &POA_StandardInterfaces::RealLong::_non_existent_skel, 0},
      {"_repository_id", &POA_StandardInterfaces::RealLong::_repository_id_skel, 0},
      {"_interface", &POA_StandardInterfaces::RealLong::_interface_skel, 0},
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE && key >= MIN_HASH_VALUE)
        {
          const char *s = wordlist[key].opname;

          if (*str == *s && !ACE_OS::strncmp (str + 1, s + 1, len - 1))
            return &wordlist[key];
        }
    }
  return 0;
}

static TAO_StandardInterfaces_RealLong_Perfect_Hash_OpTable tao_StandardInterfaces_RealLong_optable;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ss.cpp:1029

TAO::Collocation_Proxy_Broker *
StandardInterfaces__TAO_RealLong_Proxy_Broker_Factory_function ( ::CORBA::Object_ptr)
{
  return reinterpret_cast<TAO::Collocation_Proxy_Broker *> (0xdead); // Dummy
}

int
StandardInterfaces__TAO_RealLong_Proxy_Broker_Factory_Initializer (size_t)
{
  StandardInterfaces__TAO_RealLong_Proxy_Broker_Factory_function_pointer = 
    StandardInterfaces__TAO_RealLong_Proxy_Broker_Factory_function;
  
  return 0;
}

static int
StandardInterfaces__TAO_RealLong_Proxy_Broker_Stub_Factory_Initializer_Scarecrow =
  StandardInterfaces__TAO_RealLong_Proxy_Broker_Factory_Initializer (
      reinterpret_cast<size_t> (StandardInterfaces__TAO_RealLong_Proxy_Broker_Factory_Initializer));


// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ss.cpp:97

POA_StandardInterfaces::RealLong::RealLong (void)
  : TAO_ServantBase ()
{
  this->optable_ = &tao_StandardInterfaces_RealLong_optable;
}

POA_StandardInterfaces::RealLong::RealLong (const RealLong& rhs)
  : TAO_Abstract_ServantBase (rhs),
    TAO_ServantBase (rhs)
{
}

POA_StandardInterfaces::RealLong::~RealLong (void)
{
}

namespace POA_StandardInterfaces
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/upcall_command_ss.cpp:81

  class pushPacket_RealLong
    : public TAO::Upcall_Command
  {
  public:
    inline pushPacket_RealLong (
      POA_StandardInterfaces::RealLong * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::JTRS::LongSequence>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< ::JTRS::LongSequence> (
          this->operation_details_,
          this->args_,
          1);
        
      this->servant_->pushPacket (
        arg_1);
    }
  
  private:
    POA_StandardInterfaces::RealLong * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_ss.cpp:173

void POA_StandardInterfaces::RealLong::pushPacket_skel (
    TAO_ServerRequest & server_request,
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< void>::ret_val retval;
  TAO::SArg_Traits< ::JTRS::LongSequence>::in_arg_val _tao_I;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_I
    };
  
  static size_t const nargs = 2;

  POA_StandardInterfaces::RealLong * const impl =
    static_cast<POA_StandardInterfaces::RealLong *> (servant);

  pushPacket_RealLong command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}



// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ss.cpp:170


namespace POA_StandardInterfaces
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/upcall_command_ss.cpp:81

  class _is_a_RealLong_Upcall_Command
    : public TAO::Upcall_Command
  {
  public:
    inline _is_a_RealLong_Upcall_Command (
      POA_StandardInterfaces::RealLong * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::ACE_InputCDR::to_boolean> (
          this->operation_details_,
          this->args_);
      
      TAO::SArg_Traits< char *>::in_arg_type arg_1 =
        TAO::Portable_Server::get_in_arg< char *> (
          this->operation_details_,
          this->args_,
          1);
        
      retval =
        this->servant_-> _is_a (
          arg_1);
    }
  
  private:
    POA_StandardInterfaces::RealLong * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

void POA_StandardInterfaces::RealLong::_is_a_skel (
    TAO_ServerRequest & server_request, 
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_val retval;
  TAO::SArg_Traits< char *>::in_arg_val _tao_repository_id;

  TAO::Argument * const args[] =
    {
      &retval,
      &_tao_repository_id
    };
  
  static size_t const nargs = 2;

  POA_StandardInterfaces::RealLong * const impl =
    static_cast<POA_StandardInterfaces::RealLong *> (servant);
  
  _is_a_RealLong_Upcall_Command command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}


namespace POA_StandardInterfaces
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/upcall_command_ss.cpp:81

  class _non_existent_RealLong_Upcall_Command
    : public TAO::Upcall_Command
  {
  public:
    inline _non_existent_RealLong_Upcall_Command (
      POA_StandardInterfaces::RealLong * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::ACE_InputCDR::to_boolean> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_-> _non_existent ();
    }
  
  private:
    POA_StandardInterfaces::RealLong * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

void POA_StandardInterfaces::RealLong::_non_existent_skel (
    TAO_ServerRequest & server_request, 
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::ACE_InputCDR::to_boolean>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_StandardInterfaces::RealLong * const impl =
    static_cast<POA_StandardInterfaces::RealLong *> (servant);
  
  _non_existent_RealLong_Upcall_Command command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}

namespace POA_StandardInterfaces
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/upcall_command_ss.cpp:81

  class _repository_id_RealLong_Upcall_Command
    : public TAO::Upcall_Command
  {
  public:
    inline _repository_id_RealLong_Upcall_Command (
      POA_StandardInterfaces::RealLong * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< char *>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< char *> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_-> _repository_id ();
    }
  
  private:
    POA_StandardInterfaces::RealLong * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

void POA_StandardInterfaces::RealLong::_repository_id_skel (
    TAO_ServerRequest & server_request, 
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant)
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< char *>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_StandardInterfaces::RealLong * const impl =
    static_cast<POA_StandardInterfaces::RealLong *> (servant);
  
  _repository_id_RealLong_Upcall_Command command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ss.cpp:525

void POA_StandardInterfaces::RealLong::_interface_skel (
    TAO_ServerRequest & server_request, 
    void * /* servant_upcall */,
    void * servant)
{
  TAO_IFR_Client_Adapter *_tao_adapter =
    ACE_Dynamic_Service<TAO_IFR_Client_Adapter>::instance (
        TAO_ORB_Core::ifr_client_adapter_name ()
      );
    
  if (!_tao_adapter)
    {
      throw ::CORBA::INTF_REPOS (::CORBA::OMGVMCID | 1, ::CORBA::COMPLETED_NO);
    }
  
  POA_StandardInterfaces::RealLong * const impl =
    static_cast<POA_StandardInterfaces::RealLong *> (servant);
  ::CORBA::InterfaceDef_ptr _tao_retval = impl->_get_interface ();
  server_request.init_reply ();
  TAO_OutputCDR &_tao_out = *server_request.outgoing ();

  ::CORBA::Boolean const _tao_result =
    _tao_adapter->interfacedef_cdr_insert (_tao_out, _tao_retval);
  
  _tao_adapter->dispose (_tao_retval);

  if (!_tao_result)
    {
      throw ::CORBA::MARSHAL ();
    }
}


namespace POA_StandardInterfaces
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/upcall_command_ss.cpp:81

  class _get_component_RealLong_Upcall_Command
    : public TAO::Upcall_Command
  {
  public:
    inline _get_component_RealLong_Upcall_Command (
      POA_StandardInterfaces::RealLong * servant,
      TAO_Operation_Details const * operation_details,
      TAO::Argument * const args[])
      : servant_ (servant)
        , operation_details_ (operation_details)
        , args_ (args)
    {
    }

    virtual void execute (void)
    {
      TAO::SArg_Traits< ::CORBA::Object>::ret_arg_type retval =
        TAO::Portable_Server::get_ret_arg< ::CORBA::Object> (
          this->operation_details_,
          this->args_);
      
      retval =
        this->servant_-> _get_component ();
    }
  
  private:
    POA_StandardInterfaces::RealLong * const servant_;
    TAO_Operation_Details const * const operation_details_;
    TAO::Argument * const * const args_;
  };
}

void POA_StandardInterfaces::RealLong::_component_skel (
    TAO_ServerRequest & server_request, 
    void * TAO_INTERCEPTOR (servant_upcall),
    void * servant
  )
{
#if TAO_HAS_INTERCEPTORS == 1
  static ::CORBA::TypeCode_ptr const * const exceptions = 0;
  static ::CORBA::ULong const nexceptions = 0;
#endif /* TAO_HAS_INTERCEPTORS */

  TAO::SArg_Traits< ::CORBA::Object>::ret_val retval;

  TAO::Argument * const args[] =
    {
      &retval
    };
  
  static size_t const nargs = 1;

  POA_StandardInterfaces::RealLong * const impl =
    static_cast<POA_StandardInterfaces::RealLong *> (servant);
  
  _get_component_RealLong_Upcall_Command command (
    impl,
    server_request.operation_details (),
    args);
  
  TAO::Upcall_Wrapper upcall_wrapper;
  upcall_wrapper.upcall (server_request
                         , args
                         , nargs
                         , command
#if TAO_HAS_INTERCEPTORS == 1
                         , servant_upcall
                         , exceptions
                         , nexceptions
#endif  /* TAO_HAS_INTERCEPTORS == 1 */
                         );
}

::CORBA::Boolean POA_StandardInterfaces::RealLong::_is_a (const char* value)
{
  return
    (
      ACE_OS::strcmp (
          value,
          "IDL:StandardInterfaces/RealLong:1.0"
        ) == 0 ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    );
}

const char* POA_StandardInterfaces::RealLong::_interface_repository_id (void) const
{
  return "IDL:StandardInterfaces/RealLong:1.0";
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ss.cpp:966

void POA_StandardInterfaces::RealLong::_dispatch (TAO_ServerRequest & req, void * servant_upcall)
{
  this->synchronous_upcall_dispatch (req, servant_upcall, this);
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ss.cpp:884

StandardInterfaces::RealLong *
POA_StandardInterfaces::RealLong::_this (void)
{
  TAO_Stub *stub = this->_create_stub ();

  TAO_Stub_Auto_Ptr safe_stub (stub);
  ::CORBA::Object_ptr tmp = CORBA::Object_ptr ();

  ::CORBA::Boolean const _tao_opt_colloc =
    stub->servant_orb_var ()->orb_core ()->optimize_collocation_objects ();
  
  ACE_NEW_RETURN (
      tmp,
      ::CORBA::Object (stub, _tao_opt_colloc, this),
      0
    );
  
  ::CORBA::Object_var obj = tmp;
  (void) safe_stub.release ();

  typedef ::StandardInterfaces::RealLong STUB_SCOPED_NAME;
  return
    TAO::Narrow_Utils<STUB_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        StandardInterfaces__TAO_RealLong_Proxy_Broker_Factory_function_pointer
      );
}

#endif /* ifndef */

