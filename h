html {
    font-family: monospace
}

*,*::after,*::before {
    box-sizing: inherit;
    margin: 0;
    padding: 0
}

body {
    background: #000
}

#overlay-toggle {
    position: absolute;
    display: none
}

.overlay {
    z-index: 1;
    background-color: #000
}

.overlay label {
    display: grid;
    place-items: center;
    width: 100vw;
    height: 100vw;
    color: #fff;
    font-size: 2rem
}

.no-hover {
    display: block
}

.hover {
    display: none
}

.fullscreen {
    position: fixed;
    top: 50%;
    left: 50%;
    transform: translate(-50%,-50%);
    min-height: 100vh;
    min-width: 100vw
}

body {
    font-family: monospace!important;
    background-color: #000!important;
    color: #fff!important
}

a {
    text-decoration: none;
    color: gray!important
}

a:hover {
    transition: .4s!important;
    color: #fff!important
}

.ascii {
    color: #c7c7c7!important;
    top: 50%
}

span::before {
    content: '\A';
    white-space: pre
}

#center {
    position: absolute;
    left: 50%;
    top: 50%;
    transform: translate(-50%,-50%);
    -webkit-transform: translate(-50%,-50%);
    -moz-transform: translate(-50%,-50%);
    -ms-transform: translate(-50%,-50%);
    -o-transform: translate(-50%,-50%)
}

#overlay-toggle:checked~.overlay {
    animation-fill-mode: forwards;
    animation-name: fade,hide;
    animation-delay: 0s,600ms;
    animation-duration: 600ms,1ms
}

#overlay-toggle:checked~.overlay label {
    animation-fill-mode: forwards;
    animation-name: fade;
    animation-delay: 0s;
    animation-duration: 500ms
}

@media(hover: hover) {
    .hover {
        display:block
    }

    .no-hover {
        display: none
    }
}

@keyframes fade {
    to {
        opacity: 0
    }
}

@keyframes hide {
    to {
        visibility: hidden
    }
}
