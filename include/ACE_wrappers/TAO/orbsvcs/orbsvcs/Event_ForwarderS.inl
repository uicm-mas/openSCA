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


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::get_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotification::QoSAdmin::get_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::set_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotification::QoSAdmin::set_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::validate_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotification::QoSAdmin::validate_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::add_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::add_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::remove_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::get_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::get_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::remove_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::_get_MyType_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_MyType_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::_get_MyAdmin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_MyAdmin_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::_get_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::_set_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_set_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::_get_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::_set_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_set_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::obtain_offered_types_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::obtain_offered_types_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::validate_event_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::validate_event_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::subscription_change_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyComm::NotifySubscribe * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyComm::NotifySubscribe::subscription_change_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::disconnect_structured_push_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyComm::StructuredPushSupplier * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyComm::StructuredPushSupplier::disconnect_structured_push_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::connect_structured_push_consumer_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::StructuredProxyPushSupplier * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::StructuredProxyPushSupplier::connect_structured_push_consumer_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::suspend_connection_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::StructuredProxyPushSupplier * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::StructuredProxyPushSupplier::suspend_connection_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::StructuredProxyPushSupplier::resume_connection_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::StructuredProxyPushSupplier * const impl =
    static_cast<POA_Event_Forwarder::StructuredProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::StructuredProxyPushSupplier::resume_connection_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::get_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotification::QoSAdmin::get_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::set_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotification::QoSAdmin::set_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::validate_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotification::QoSAdmin::validate_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::add_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::add_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::remove_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::get_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::get_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::remove_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::_get_MyType_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_MyType_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::_get_MyAdmin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_MyAdmin_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::_get_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::_set_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_set_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::_get_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_get_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::_set_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl = static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::_set_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::obtain_offered_types_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::obtain_offered_types_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::validate_event_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxySupplier * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxySupplier::validate_event_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::subscription_change_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyComm::NotifySubscribe * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyComm::NotifySubscribe::subscription_change_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::disconnect_push_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventComm::PushSupplier * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosEventComm::PushSupplier::disconnect_push_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::connect_any_push_consumer_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxyPushSupplier * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxyPushSupplier::connect_any_push_consumer_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::suspend_connection_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxyPushSupplier * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxyPushSupplier::suspend_connection_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_Event_Forwarder::ProxyPushSupplier::resume_connection_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ProxyPushSupplier * const impl =
    static_cast<POA_Event_Forwarder::ProxyPushSupplier *> (servant);
  POA_CosNotifyChannelAdmin::ProxyPushSupplier::resume_connection_skel (
      server_request,
      servant_upcall,
      impl);
}


TAO_END_VERSIONED_NAMESPACE_DECL


