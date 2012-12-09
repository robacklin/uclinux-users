# This script was automatically generated from the dsa-1176
# Debian Security Advisory
# It is released under the Nessus Script Licence.
# Advisory is copyright 1997-2004 Software in the Public Interest, Inc.
# See http://www.debian.org/license
# DSA2nasl Convertor is copyright 2004 Michel Arboi

if (! defined_func('bn_random')) exit(0);

desc = '
It was discovered that the Zope web application server does not disable
the csv_table directive in web pages containing ReST markup, allowing
the exposure of files readable by the Zope server.
For the stable distribution (sarge) this problem has been fixed in
version 2.7.5-2sarge2.
The unstable distribution (sid) doesn\'t contain zope2.7 any longer, for
zope2.8 this problem has been fixed in version 2.8.8-2.
We recommend that you upgrade your Zope package.


Solution : http://www.debian.org/security/2006/dsa-1176
Risk factor : High';

if (description) {
 script_id(22718);
 script_version("$Revision: 1.1 $");
 script_xref(name: "DSA", value: "1176");
 script_cve_id("CVE-2006-4684");

 script_description(english: desc);
 script_copyright(english: "This script is (C) 2006 Michel Arboi <mikhail@nessus.org>");
 script_name(english: "[DSA1176] DSA-1176-1 zope2.7");
 script_category(ACT_GATHER_INFO);
 script_family(english: "Debian Local Security Checks");
 script_dependencies("ssh_get_info.nasl");
 script_require_keys("Host/Debian/dpkg-l");
 script_summary(english: "DSA-1176-1 zope2.7");
 exit(0);
}

include("debian_package.inc");

w = 0;
if (deb_check(prefix: 'zope2.7', release: '3.1', reference: '2.7.5-2sarge3')) {
 w ++;
 if (report_verbosity > 0) desc = strcat(desc, '\nThe package zope2.7 is vulnerable in Debian 3.1.\nUpgrade to zope2.7_2.7.5-2sarge3\n');
}
if (deb_check(prefix: 'zope2.7', release: '3.1', reference: '2.7.5-2sarge2')) {
 w ++;
 if (report_verbosity > 0) desc = strcat(desc, '\nThe package zope2.7 is vulnerable in Debian sarge.\nUpgrade to zope2.7_2.7.5-2sarge2\n');
}
if (w) { security_hole(port: 0, data: desc); }
