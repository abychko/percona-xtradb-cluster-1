Summary: handlersocket plugin for mysql
Name: handlersocket
Version: 1.0.4
Release: 1%{?dist}
Group: System Environment/Libraries
License: BSD
Source: handlersocket.tar.gz
Packager: Akira Higuchi <higuchi dot akira at dena dot jp>
BuildRoot: /var/tmp/%{name}-%{version}-root

%description

%prep
%setup -n %{name}

%define _use_internal_dependency_generator 0

%build
make

%install
rm -rf $RPM_BUILD_ROOT
mkdir -p $RPM_BUILD_ROOT/%{_libdir}/mysql/plugin
install -m 755 handlersocket.so $RPM_BUILD_ROOT/%{_libdir}/mysql/plugin/

%files
%defattr(-, root, root)
%{_libdir}/mysql/plugin/*.so

