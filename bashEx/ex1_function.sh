#!/bin/bash
# Program to output a system information page
TITLE="System Information Report For $HOSTNAME"
CURRENT_FIME=$(date +%x%r%z)
TIME_STAMP="Generated $CURRENT_FIME, by $USER"
report_uptime() {
    echo "Function report_uptime executed."
    return 
}

report_disk_space() {
    echo "Function report_disk_space executed."
    return 
}


report_home_space() {
    cat <<- _EOF_
    <h2>Home Space Untilization</h2>
    <PRE>$(du -sh /home/*)</PRE>
    _EOF_
    return 
}

report_home_space