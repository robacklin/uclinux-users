#
# (C) Tenable Network Security
#
# This plugin text was extracted from Mandrake Linux Security Advisory MDKSA-2005:062
#


if ( ! defined_func("bn_random") ) exit(0);
if(description)
{
 script_id(17668);
 script_version ("$Revision: 1.3 $");
 script_cve_id("CVE-2005-0398");
 
 name["english"] = "MDKSA-2005:062: ipsec-tools";
 
 script_name(english:name["english"]);
 
 desc["english"] = "
The remote host is missing the patch for the advisory MDKSA-2005:062 (ipsec-tools).



A bug was discovered in the way that the racoon daemon handled incoming ISAKMP
requests. It is possible that an attacker could crash the racoon daemon by
sending a specially crafted ISAKMP packet.

The updated packages have been patched to correct these issues.



Solution : http://wwwnew.mandriva.com/security/advisories?name=MDKSA-2005:062
Risk factor : High";



 script_description(english:desc["english"]);
 
 summary["english"] = "Check for the version of the ipsec-tools package";
 script_summary(english:summary["english"]);
 
 script_category(ACT_GATHER_INFO);
 
 script_copyright(english:"This script is Copyright (C) 2005 Tenable Network Security");
 family["english"] = "Mandrake Local Security Checks";
 script_family(english:family["english"]);
 
 script_dependencies("ssh_get_info.nasl");
 script_require_keys("Host/Mandrake/rpm-list");
 exit(0);
}

include("rpm.inc");
if ( rpm_check( reference:"ipsec-tools-0.2.5-0.3.100mdk", release:"MDK10.0", yank:"mdk") )
{
 security_hole(0);
 exit(0);
}
if ( rpm_check( reference:"libipsec-tools0-0.2.5-0.3.100mdk", release:"MDK10.0", yank:"mdk") )
{
 security_hole(0);
 exit(0);
}
if ( rpm_check( reference:"ipsec-tools-0.2.5-2.1.101mdk", release:"MDK10.1", yank:"mdk") )
{
 security_hole(0);
 exit(0);
}
if ( rpm_check( reference:"libipsec-tools0-0.2.5-2.1.101mdk", release:"MDK10.1", yank:"mdk") )
{
 security_hole(0);
 exit(0);
}
if (rpm_exists(rpm:"ipsec-tools-", release:"MDK10.0")
 || rpm_exists(rpm:"ipsec-tools-", release:"MDK10.1") )
{
 set_kb_item(name:"CVE-2005-0398", value:TRUE);
}
