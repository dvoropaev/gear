.\" Copyright (C) 2007  Alexey Gladkov <legion@altlinux.org>
.\" Copyright (C) 2010  Dmitry V. Levin <ldv@altlinux.org>
.\"
.\" Additional documentation for the gear-merge command.
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
gear\-merge \- merge branches in the package repository

[ENVIRONMENT]
.TP
.B GIT_DIR
If the
.B GIT_DIR
environment variable is set then it specifies a path to use instead of
the default for the base of the repository.
.TP
.B GEAR_MERGE
.B gear\-merge
always exports \fBGEAR_MERGE\fR=\fI1\fR to the environment.

[SEE ALSO]
.BR gear (1).
