
---

### 📘 `tryhackme-writeups/blue.md`

```markdown
# 🧠 TryHackMe: Blue Walkthrough

## 🖥️ Target

Windows machine vulnerable to SMB exploits.

## 🛠️ Tools Used

- Nmap
- Enum4linux
- Metasploit

## 🔍 Steps

1. Nmap scan revealed SMB ports
2. Enum4linux showed accessible shares
3. Used EternalBlue exploit via Metasploit
4. Gained shell and escalated privileges

## 📚 Lessons Learned

- SMB enumeration
- Exploitation using Metasploit
- Privilege escalation basics
