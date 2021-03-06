.\" Copyright (C) 2008  Alexey Gladkov <legion@altlinux.org>
.\" Copyright (C) 2008-2009  Dmitry V. Levin <ldv@altlinux.org>
.\" Copyright (C) 2009  Alexey I. Froloff <raorn@altlinux.org>
.\"
.\" Additional documentation for the gear-changelog command.
.\"
.\" This file is free software; you can redistribute it and/or modify
.\" it under the terms of the GNU General Public License as published by
.\" the Free Software Foundation; either version 2 of the License, or
.\" (at your option) any later version.
.\"
.\" This program is distributed in the hope that it will be useful,
.\" but WITHOUT ANY WARRANTY; without even the implied warranty of
.\" MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
.\" GNU General Public License for more details.
.\"
.\" You should have received a copy of the GNU General Public License
.\" along with this program; if not, write to the Free Software
.\" Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA.

[NAME]
gear\-changelog \- generate changelog entry from git commit logs

[DESCRIPTION]
The utility filters and formats git commit messages according to
rules file present in git repository.

If
.I <since>
is specified, then
.B gear\-changelog
shows only commits between
.I <since>
and HEAD. Otherwise, last named commit used.

[CONFIGURATION]
\fBgear\-changelog\fR reads following configuration options from git\-config:
.PP
gear.changelog.email
.RS 4
author email, defaults to git user.email.
.RE
.PP
gear.changelog.name
.RS 4
author name, defaults to git user.name.
.RE

[ENVIRONMENT]
.TP
.B RULES
Specifies a gear rules filename.
.TP
.B GIT_AUTHOR_NAME
Specifies a committer name.
.TP
.B GIT_AUTHOR_EMAIL
Specifies a committer email.

[SEE ALSO]
.BR gear (1),
.BR gear\-changelog\-rules (5),
.BR git\-config (1).
