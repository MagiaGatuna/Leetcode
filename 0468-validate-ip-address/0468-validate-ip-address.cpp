class Solution {
public:
    string validIPAddress(string queryIP) {
        regex ipv4_pattern("((\\d|[1-9]\\d|1\\d\\d|2[0-4]\\d|25[0-5])\\.){3}(\\d|[1-9]\\d|1\\d\\d|2[0-4]\\d|25[0-5])");
        regex ipv6_pattern("([a-fA-F0-9]{1,4}:){7}[a-fA-F0-9]{1,4}");
        if (regex_match(queryIP, ipv4_pattern))
            return "IPv4";
        if (regex_match(queryIP, ipv6_pattern))
            return "IPv6";
        return "Neither";
    }
};