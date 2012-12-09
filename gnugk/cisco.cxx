//
// cisco.cxx
//
// Code automatically generated by asnparse.
//

#ifdef P_USE_PRAGMA
#pragma implementation "cisco.h"
#endif

#include <ptlib.h>
#include "cisco.h"

#define new PNEW


#if ! H323_DISABLE_CISCO



//
// ArrayOf_AliasAddress
//

Cisco_ArrayOf_AliasAddress::Cisco_ArrayOf_AliasAddress(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Array(tag, tagClass)
{
}


PASN_Object * Cisco_ArrayOf_AliasAddress::CreateObject() const
{
  return new H225_AliasAddress;
}


H225_AliasAddress & Cisco_ArrayOf_AliasAddress::operator[](PINDEX i) const
{
  return (H225_AliasAddress &)array[i];
}


PObject * Cisco_ArrayOf_AliasAddress::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(Cisco_ArrayOf_AliasAddress::Class()), PInvalidCast);
#endif
  return new Cisco_ArrayOf_AliasAddress(*this);
}


//
// ARQnonStandardInfo
//

Cisco_ARQnonStandardInfo::Cisco_ARQnonStandardInfo(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 0, TRUE, 5)
{
  m_redirectIEinfo.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
  m_callingOctet3a.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
  m_displayInformationElement.SetConstraints(PASN_Object::FixedConstraint, 1, 128);
  m_interfaceSpecificBillingId.SetConstraints(PASN_Object::FixedConstraint, 1, 128);
  m_interfaceDescription.SetConstraints(PASN_Object::FixedConstraint, 1, 128);
}


#ifndef PASN_NOPRINTON
void Cisco_ARQnonStandardInfo::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+14) << "sourceAlias = " << setprecision(indent) << m_sourceAlias << '\n';
  strm << setw(indent+17) << "sourceExtAlias = " << setprecision(indent) << m_sourceExtAlias << '\n';
  if (HasOptionalField(e_redirectIEinfo))
    strm << setw(indent+17) << "redirectIEinfo = " << setprecision(indent) << m_redirectIEinfo << '\n';
  if (HasOptionalField(e_callingOctet3a))
    strm << setw(indent+17) << "callingOctet3a = " << setprecision(indent) << m_callingOctet3a << '\n';
  if (HasOptionalField(e_displayInformationElement))
    strm << setw(indent+28) << "displayInformationElement = " << setprecision(indent) << m_displayInformationElement << '\n';
  if (HasOptionalField(e_interfaceSpecificBillingId))
    strm << setw(indent+29) << "interfaceSpecificBillingId = " << setprecision(indent) << m_interfaceSpecificBillingId << '\n';
  if (HasOptionalField(e_interfaceDescription))
    strm << setw(indent+23) << "interfaceDescription = " << setprecision(indent) << m_interfaceDescription << '\n';
  strm << setw(indent-1) << "}";
}
#endif


PObject::Comparison Cisco_ARQnonStandardInfo::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, Cisco_ARQnonStandardInfo), PInvalidCast);
#endif
  const Cisco_ARQnonStandardInfo & other = (const Cisco_ARQnonStandardInfo &)obj;

  Comparison result;

  if ((result = m_sourceAlias.Compare(other.m_sourceAlias)) != EqualTo)
    return result;
  if ((result = m_sourceExtAlias.Compare(other.m_sourceExtAlias)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX Cisco_ARQnonStandardInfo::GetDataLength() const
{
  PINDEX length = 0;
  length += m_sourceAlias.GetObjectLength();
  length += m_sourceExtAlias.GetObjectLength();
  return length;
}


BOOL Cisco_ARQnonStandardInfo::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_sourceAlias.Decode(strm))
    return FALSE;
  if (!m_sourceExtAlias.Decode(strm))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_redirectIEinfo, m_redirectIEinfo))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_callingOctet3a, m_callingOctet3a))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_displayInformationElement, m_displayInformationElement))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_interfaceSpecificBillingId, m_interfaceSpecificBillingId))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_interfaceDescription, m_interfaceDescription))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void Cisco_ARQnonStandardInfo::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_sourceAlias.Encode(strm);
  m_sourceExtAlias.Encode(strm);
  KnownExtensionEncode(strm, e_redirectIEinfo, m_redirectIEinfo);
  KnownExtensionEncode(strm, e_callingOctet3a, m_callingOctet3a);
  KnownExtensionEncode(strm, e_displayInformationElement, m_displayInformationElement);
  KnownExtensionEncode(strm, e_interfaceSpecificBillingId, m_interfaceSpecificBillingId);
  KnownExtensionEncode(strm, e_interfaceDescription, m_interfaceDescription);

  UnknownExtensionsEncode(strm);
}


PObject * Cisco_ARQnonStandardInfo::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(Cisco_ARQnonStandardInfo::Class()), PInvalidCast);
#endif
  return new Cisco_ARQnonStandardInfo(*this);
}


//
// LRQnonStandardInfo
//

Cisco_LRQnonStandardInfo::Cisco_LRQnonStandardInfo(unsigned tag, PASN_Object::TagClass tagClass)
  : PASN_Sequence(tag, tagClass, 0, TRUE, 5)
{
  m_ttl.SetConstraints(PASN_Object::FixedConstraint, 1, 255);
  m_redirectIEinfo.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
  m_callingOctet3a.SetConstraints(PASN_Object::FixedConstraint, 0, 255);
  m_displayInformationElement.SetConstraints(PASN_Object::FixedConstraint, 1, 128);
}


#ifndef PASN_NOPRINTON
void Cisco_LRQnonStandardInfo::PrintOn(ostream & strm) const
{
  int indent = strm.precision() + 2;
  strm << "{\n";
  strm << setw(indent+6) << "ttl = " << setprecision(indent) << m_ttl << '\n';
  if (HasOptionalField(e_callIdentifier))
    strm << setw(indent+17) << "callIdentifier = " << setprecision(indent) << m_callIdentifier << '\n';
  if (HasOptionalField(e_redirectIEinfo))
    strm << setw(indent+17) << "redirectIEinfo = " << setprecision(indent) << m_redirectIEinfo << '\n';
  if (HasOptionalField(e_callingOctet3a))
    strm << setw(indent+17) << "callingOctet3a = " << setprecision(indent) << m_callingOctet3a << '\n';
  if (HasOptionalField(e_gatewaySrcInfo))
    strm << setw(indent+17) << "gatewaySrcInfo = " << setprecision(indent) << m_gatewaySrcInfo << '\n';
  if (HasOptionalField(e_displayInformationElement))
    strm << setw(indent+28) << "displayInformationElement = " << setprecision(indent) << m_displayInformationElement << '\n';
  strm << setw(indent-1) << "}";
}
#endif


PObject::Comparison Cisco_LRQnonStandardInfo::Compare(const PObject & obj) const
{
#ifndef PASN_LEANANDMEAN
  PAssert(PIsDescendant(&obj, Cisco_LRQnonStandardInfo), PInvalidCast);
#endif
  const Cisco_LRQnonStandardInfo & other = (const Cisco_LRQnonStandardInfo &)obj;

  Comparison result;

  if ((result = m_ttl.Compare(other.m_ttl)) != EqualTo)
    return result;

  return PASN_Sequence::Compare(other);
}


PINDEX Cisco_LRQnonStandardInfo::GetDataLength() const
{
  PINDEX length = 0;
  length += m_ttl.GetObjectLength();
  return length;
}


BOOL Cisco_LRQnonStandardInfo::Decode(PASN_Stream & strm)
{
  if (!PreambleDecode(strm))
    return FALSE;

  if (!m_ttl.Decode(strm))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_callIdentifier, m_callIdentifier))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_redirectIEinfo, m_redirectIEinfo))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_callingOctet3a, m_callingOctet3a))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_gatewaySrcInfo, m_gatewaySrcInfo))
    return FALSE;
  if (!KnownExtensionDecode(strm, e_displayInformationElement, m_displayInformationElement))
    return FALSE;

  return UnknownExtensionsDecode(strm);
}


void Cisco_LRQnonStandardInfo::Encode(PASN_Stream & strm) const
{
  PreambleEncode(strm);

  m_ttl.Encode(strm);
  KnownExtensionEncode(strm, e_callIdentifier, m_callIdentifier);
  KnownExtensionEncode(strm, e_redirectIEinfo, m_redirectIEinfo);
  KnownExtensionEncode(strm, e_callingOctet3a, m_callingOctet3a);
  KnownExtensionEncode(strm, e_gatewaySrcInfo, m_gatewaySrcInfo);
  KnownExtensionEncode(strm, e_displayInformationElement, m_displayInformationElement);

  UnknownExtensionsEncode(strm);
}


PObject * Cisco_LRQnonStandardInfo::Clone() const
{
#ifndef PASN_LEANANDMEAN
  PAssert(IsClass(Cisco_LRQnonStandardInfo::Class()), PInvalidCast);
#endif
  return new Cisco_LRQnonStandardInfo(*this);
}


#endif // if ! H323_DISABLE_CISCO


// End of cisco.cxx
