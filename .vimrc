let g:cpp_class_scope_highlight = 1
let g:cpp_member_variable_highlight = 1
let g:cpp_class_decl_highlight = 1
let g:cpp_posix_standard = 1
let g:cpp_experimental_simple_template_highlight = 1
let g:cpp_experimental_template_highlight = 1
let g:cpp_concepts_highlight = 1
let g:cpp_no_function_highlight = 1
let g:AutoPairs = {'{':'}'}
let g:UltiSnipsExpandTrigger="<tab>"
let g:UltiSnipsJumpForwardTrigger="<tab>"
let g:UltiSnipsJumpBackwardTrigger="<s-tab>"
call plug#begin()
Plug 'morhetz/gruvbox'
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'
Plug 'bfrg/vim-cpp-modern'
Plug 'jiangmiao/auto-pairs'
call plug#end()
cd ~/cp
color gruvbox
set nowrap
set background=dark
set guifont=Fantasque_Sans_Mono:h16:cANSI:qDRAFT
set tabstop=2
set softtabstop=2
set shiftwidth=2
set scrolloff=1
set relativenumber
set number
set clipboard=unnamed
set backspace=indent,eol,start
set termguicolors
set noswapfile
set expandtab
set mouse=a
set guioptions-=m
set guioptions-=T
set guioptions-=r
set guioptions+=i
set guicursor=i-c:hor25
let mapleader=" "
autocmd BufEnter * syntax match Type 'i64'
autocmd BufEnter * syntax match Type 'd64'
autocmd BufEnter * syntax match Type 'T'
autocmd BufEnter * syntax match Function 'gap'
map <leader>c :w !clip.exe<cr><cr>
map <leader>a ggVG
map <F5> :w<cr> :!g++ -std=c++17 -Wall -O2 -DDEB % -o %:r && %:r < input<cr>
au GUIEnter * simalt ~x
