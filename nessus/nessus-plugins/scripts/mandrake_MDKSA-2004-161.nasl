#
# (C) Tenable Network Security
#
# This plugin text was extracted from Mandrake Linux Security Advisory MDKSA-2004:161
#


if ( ! defined_func("bn_random") ) exit(0);
if(description)
{
 script_id(16078);
 script_version ("$Revision: 1.3 $");
 script_cve_id("CVE-2004-1125");
 
 name["english"] = "MDKSA-2004:161: xpdf";
 
 script_name(english:name["english"]);
 
 desc["english"] = "
The remote host is missing the patch for the advisory MDKSA-2004:161 (xpdf).



iDefense reported a buffer overflow vulnerability, which affects versions of
xpdf <= xpdf-3.0. An attacker could construct a malicious payload file which
could enable arbitrary code execution on the target system.

The updated packages are patched to protect against these vulnerabilities.



Solution : http://wwwnew.mandriva.com/security/advisories?name=MDKSA-2004:161
Risk factor : High";



 script_description(english:desc["english"]);
 
 summary["english"] = "Check for the version of the xpdf package";
 script_summary(english:summary["english"]);
 
 script_category(ACT_GATHER_INFO);
 
 script_copyright(english:"This script is Copyright (C) 2004 Tenable Network Security");
 family["english"] = "Mandrake Local Security Checks";
 script_family(english:family["english"]);
 
 script_dependencies("ssh_get_info.nasl");
 script_require_keys("Host/Mandrake/rpm-list");
 exit(0);
}

include("rpm.inc");
if ( rpm_check( reference:"xpdf-3.00-5.3.100mdk", release:"MDK10.0", yank:"mdk") )
{
 security_hole(0);
 exit(0);
}
if ( rpm_check( reference:"xpdf-3.00-7.2.101mdk", release:"MDK10.1", yank:"mdk") )
{
 security_hole(0);
 exit(0);
}
if (rpm_exists(rpm:"xpdf-", release:"MDK10.0")
 || rpm_exists(rpm:"xpdf-", release:"MDK10.1") )
{
 set_kb_item(name:"CVE-2004-1125", value:TRUE);
}
